#include "Arduino.h"
#include "WiFi.h"
#include "Audio.h"
#include "SD.h"
#include "FS.h"
#include "lvgl.h"
#include <ArduinoJson.h>


//UI
lv_obj_t *lblTitle;
lv_obj_t *lblStation;

#define USE_SDCARD
#include "wt32_sc01_plus.h"

//SCHREIBFAUL-AUDIO :-)
Audio audio;

String ssid;
String password; 
JsonArray stations;

DynamicJsonDocument  config(1000);

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

void setup() {
  
  Serial.begin(115200);

   #ifdef USE_SDCARD

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
  #endif

if( !init_Display())
  {
      Serial.println("ERROR ON DISPLAY INIT !");
  }
  else
  {
      //CREATE ONLY TWO LABELS USING LVGL
    lblStation = lv_label_create(lv_scr_act());
    lblTitle = lv_label_create(lv_scr_act());

    // SCREEN BLACK
    lv_obj_set_style_bg_color(lv_scr_act(), lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );      //BLACK
    lv_obj_set_style_bg_opa(lv_scr_act(), 255, LV_PART_MAIN| LV_STATE_DEFAULT);                             //OPACITY

    lv_obj_set_width(lblStation, screenWidth - 30);                                                          //WIDTH
    lv_obj_align(lblStation, LV_ALIGN_TOP_MID, 0, 0);                                                        //TOP
    lv_obj_set_style_text_font(lblStation, &lv_font_montserrat_28, LV_PART_MAIN| LV_STATE_DEFAULT);          //FONT
    lv_obj_set_style_text_color(lblStation, lv_color_hex(0xFFFEFE), LV_PART_MAIN | LV_STATE_DEFAULT );       //TEXT-COLOR
    lv_obj_set_style_text_align(lblStation, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);           //TEXT-ALIGN
    lv_label_set_text(lblStation, "STATION ...");                                                            //TEXT

    lv_obj_set_width(lblTitle, screenWidth - 30);
    lv_obj_align(lblTitle, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_text_font(lblTitle, &lv_font_montserrat_30, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(lblTitle, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT );
    lv_obj_set_style_text_align(lblTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_label_set_text(lblTitle, "TITLE ...");
  }

  WiFi.disconnect();
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid.c_str(), password.c_str());
  while (WiFi.status() != WL_CONNECTED) delay(1500);
  audio.setPinout(I2S_BCK, I2S_WS, I2S_DATA);               //defined in wt32_sc01_plus.h
  audio.setVolume(2); // default 0...21

  //  *** radio streams ***
  // ICECAST DIRECTOY -> https://dir.xiph.org
 
  audio.connecttohost(stations[0]);  // first. station from config

}

void loop() {
  audio.loop();
  lv_timer_handler(); /* let the GUI do its work */

}


/* PUSH META_DATA TO DISPLAY */
void audio_showstation(const char *info){
    Serial.print("station     ");Serial.println(info);
    lv_label_set_text(lblStation, info);
}

void audio_showstreamtitle(const char *info){
    Serial.print("streamtitle ");Serial.println(info);
    lv_label_set_text(lblTitle, info);
}


// optional
void audio_info(const char *info){
    Serial.print("info        "); Serial.println(info);
}
void audio_id3data(const char *info){  //id3 metadata
    Serial.print("id3data     ");Serial.println(info);
}
void audio_eof_mp3(const char *info){  //end of file
    Serial.print("eof_mp3     ");Serial.println(info);
}

void audio_bitrate(const char *info){
    Serial.print("bitrate     ");Serial.println(info);
}
void audio_commercial(const char *info){  //duration in sec
    Serial.print("commercial  ");Serial.println(info);
}
void audio_icyurl(const char *info){  //homepage
    Serial.print("icyurl      ");Serial.println(info);
}
void audio_lasthost(const char *info){  //stream URL played
    Serial.print("lasthost    ");Serial.println(info);
}
void audio_eof_speech(const char *info){
    Serial.print("eof_speech  ");Serial.println(info);
}
