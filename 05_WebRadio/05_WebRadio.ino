#include "Arduino.h"
#include "WiFi.h"
#include "Audio.h"
#include "SD.h"
#include "FS.h"
#include "lvgl.h"
#include <ArduinoJson.h>

#include "ui.h"

#define USE_SDCARD
#include "wt32_sc01_plus.h"


//UI
lv_obj_t *lblTitle;
lv_obj_t *lblStation;

//SCHREIBFAUL-AUDIO :-)
Audio audio;

String ssid;
String password; 
JsonArray stations;

DynamicJsonDocument  config(1000);

char * oldTitle = new char[255];
char * oldStation = new char[255];
char * oldArtist = new char[255];


/* READ CONFIG JSON */
bool readConfig(){
  File dataFile = SD.open("/config.json");
  DeserializationError error = deserializeJson(config, dataFile);

  if (error) {
    Serial.print(F("deserializeJson() failed: "));
    Serial.println(error.f_str());
    return false;
  }

  /* READ SSID */
  const char* _ssid = config["ssid"];
  ssid = String(_ssid);

  /* READ PASSWORD */
  const char* _password = config["password"];
  password = String(_password);

  /* READ STATIONS-LIST */
  stations = config["stations"];

  return true;
}




void scrollText(struct _lv_obj_t * label, const char * text)
{

  lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, 0);

  // calculate size of text to be set
        lv_point_t size;
        lv_txt_get_size(&size, text, lv_obj_get_style_text_font(label, LV_PART_MAIN), 
                                                lv_obj_get_style_text_letter_space(label, LV_PART_MAIN),
                                                lv_obj_get_style_text_line_space(label, LV_PART_MAIN),
                                                LV_COORD_MAX,
                                                label->flags);


        //get the actual size of  text                    
        lv_area_t txt_coords;
        lv_obj_get_content_coords(label, &txt_coords);

        //determine if we need padding
        int16_t padSize = lv_area_get_width(&txt_coords) - size.x;
        char textBuf[255] = "";


        if(padSize > -1){
            //if the text needs padding, grab the width of a blank space
            lv_txt_get_size(&size, " ", lv_obj_get_style_text_font(label, LV_PART_MAIN), 
                                                lv_obj_get_style_text_letter_space(label, LV_PART_MAIN),
                                                lv_obj_get_style_text_line_space(label, LV_PART_MAIN),
                                                LV_COORD_MAX,
                                                label->flags);
            //lets left pad the incoing text into a new buffer
            sprintf(textBuf,"%*s%s", (padSize / size.x) + 1, "", text);
        } else {
            // no padding, copy text into buffer
            sprintf(textBuf,"%s", text);
        }
        // set text, and set to scroll
        lv_label_set_text(label, textBuf);
        lv_label_set_long_mode(label, LV_LABEL_LONG_SCROLL_CIRCULAR);
}



void setImgButtons(lv_obj_t * target)
{
  lv_imgbtn_set_state(ui_btnStation1, LV_IMGBTN_STATE_RELEASED);
  lv_imgbtn_set_state(ui_btnStation2, LV_IMGBTN_STATE_RELEASED);
  lv_imgbtn_set_state(ui_btnStation3, LV_IMGBTN_STATE_RELEASED);
  lv_imgbtn_set_state(ui_btnStation4, LV_IMGBTN_STATE_RELEASED);
  lv_imgbtn_set_state(target,  LV_IMGBTN_STATE_CHECKED_PRESSED);

  
}

void clearAll()
{
    lv_label_set_text(ui_lblStation, "");
    lv_label_set_text(ui_lblTitle, "");
    lv_label_set_text(ui_lblInterpret, "");

}

static void btnStation_click(lv_event_t * event)
{
  clearAll();
  lv_obj_t * target = lv_event_get_target(event);
  setImgButtons(target);

  if(target == ui_btnStation1) {
    audio.connecttohost(stations[0]);  // first. station from config
  } 
  else if (target == ui_btnStation2) {
      audio.connecttohost(stations[1]);  // first. station from config
  } 
  else if (target == ui_btnStation3) {
      audio.connecttohost(stations[2]);
  }
  else if (target == ui_btnStation4) {
      audio.connecttohost(stations[3]);  // first. station from config
  }
}

static void volumeSlider_changed(lv_event_t * e)
{
    lv_obj_t * slider = lv_event_get_target(e);
    if(slider)
    {
      char buf[8];
      lv_snprintf(buf, sizeof(buf), "%d%", lv_slider_get_value(slider));
      int n = atoi(buf);              
    
      audio.setVolume(n);
    }
}



void setup()
{
 Serial.begin(115200);

  delay(100);

    hspi.begin(SD_CLK_PIN, SD_MISO_PIN, SD_MOSI_PIN, SD_CS_PIN);  //hspi defined in wt32_sc01_plus.h

    if(!SD.begin(SD_CS_PIN, hspi, SD_SPI_FREQ)){
        Serial.println("Card Mount Failed");
        return;
    } else {

    uint8_t cardType = SD.cardType();
    if(cardType == CARD_NONE){
        Serial.println("No SD card attached");      
    }
    else 
    {
      Serial.print("SD Card Type: ");
      if(cardType == CARD_MMC){
          Serial.println("MMC");
      } else if(cardType == CARD_SD){
          Serial.println("SDSC");
      } else if(cardType == CARD_SDHC){
          Serial.println("SDHC");
      } else {
          Serial.println("UNKNOWN");
      }

    uint64_t cardSize = SD.cardSize() / (1024 * 1024);
    Serial.printf("SD Card Size: %lluMB\r\n", cardSize);

    if(!readConfig()) {       // READ SSID; PASSWORD AND STATIONS
    Serial.println("error opening config.json");
      }

    }
  }

  if( !init_Display())
  {
      Serial.println("ERROR ON DSPLAY INIT !");
  }
  else
  {
    ui_init();

    lv_obj_add_event_cb(ui_btnStation1, btnStation_click, LV_EVENT_CLICKED, NULL); 
    lv_obj_add_event_cb(ui_btnStation2, btnStation_click, LV_EVENT_CLICKED, NULL); 
    lv_obj_add_event_cb(ui_btnStation3, btnStation_click, LV_EVENT_CLICKED, NULL); 
    lv_obj_add_event_cb(ui_btnStation4, btnStation_click, LV_EVENT_CLICKED, NULL); 

    lv_obj_add_event_cb(ui_volumeSlider, volumeSlider_changed, LV_EVENT_VALUE_CHANGED , NULL); 

    scrollText(ui_lblInterpret, "...");
    scrollText(ui_lblStation, "...");
    scrollText(ui_lblTitle, "...");

    const char * default_old = "ABC";
    strcpy ( oldStation, default_old );
    strcpy ( oldArtist, default_old );
    strcpy ( oldTitle, default_old );

  WiFi.disconnect();
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid.c_str(), password.c_str());
  while (WiFi.status() != WL_CONNECTED) delay(1500);
  audio.setPinout(I2S_BCK, I2S_WS, I2S_DATA);               //defined in wt32_sc01_plus.h
  audio.setVolume(2); // default 0...21
  
    lv_slider_set_value(ui_volumeSlider , 1 , LV_ANIM_OFF);
   //default  1st Button click
    lv_event_send(ui_btnStation1, LV_EVENT_CLICKED, NULL);
   
  }
}


void loop() {
  audio.loop();
  lv_timer_handler(); /* let the GUI do its work */

}

/* PUSH META_DATA TO DISPLAY */
void audio_showstation(const char *info){
    Serial.print("station     ");Serial.println(info);
    if(strcmp(info, oldStation))
    {
        lv_label_set_text(ui_lblStation, info);
        strcpy ( oldStation, info );
    }
}

void audio_showstreamtitle(const char *info){
    Serial.print("streamtitle ");Serial.println(info);
    if(strcmp(info,oldTitle))
    {
        scrollText(ui_lblTitle,info);
        strcpy ( oldTitle, info );
    }
}
