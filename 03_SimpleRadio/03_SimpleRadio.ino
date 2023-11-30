#define USE_HELIX 

#include <Arduino.h>
#include "wt32_sc01_plus.h"


#include "AudioTools.h"
#include "AudioCodecs/CodecMP3Helix.h"

using namespace audio_tools;  


const char *wifi = "YourSSID";
const char *password = "YourPassword";

// FROM ICECAST DIRECTOY -> https://dir.xiph.org/codecs/MP3
const char *urlstream =  "http://radio4.cdm-radio.com:8020/stream-mp3-Chill_autodj";   // COSTA DEL MAR - CHILLOUT

//"THE" stream
ICYStream  url(wifi, password);


I2SStream i2s; // final output of decoded stream
VolumeStream volume(i2s); //for voulme adjustment
EncodedAudioStream dec(&volume, new MP3DecoderHelix()); // Decoding stream
StreamCopy copier(dec, url); // copy url to decoder

char * oldTitle = new char[255];

//UI Elements
lv_obj_t *ui_Screen;
lv_obj_t *ui_lblStation;         // LGVL Label
lv_obj_t *ui_lblTitle;         // LGVL Label



//HELPER TO SCROLL TEXT INSIDE A LABEL
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

// callback for meta data
static void printMetaData(MetaDataType type, const char* str, int len){
  //enum MetaDataType { Title, Artist, Album, Genre, Name, Description };
  switch (type)
  {
    case 0:
       if(strcmp(str,oldTitle)) //Avoid setting same title again
        {
            scrollText(ui_lblTitle,str);
            strcpy ( oldTitle, str );
        }
      break;

    case 1:
      break;

    case 2:
      break;

    case 3:
      break;

    case 4:
      lv_label_set_text(ui_lblStation, str);

      break;

    case 5:

    default:
    break;
  }
}

void setup() {
  
  Serial.begin(115200);
  delay(100);

  const char * default_old = "ABC";
  strcpy ( oldTitle, default_old );

  if( !init_Display())
  {
      Serial.println("ERROR ON DSPLAY INIT !");
  }
  else
  {
    // (Very) Simple UI

    //SCREEN BLACK
    lv_obj_set_style_bg_color(lv_scr_act(), lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
    lv_obj_set_style_bg_opa(lv_scr_act(), 255, LV_PART_MAIN| LV_STATE_DEFAULT);

    // STATION - LABEL
    ui_lblStation = lv_label_create(lv_scr_act());
    lv_obj_set_width( ui_lblStation, 480);     
    lv_obj_set_height( ui_lblStation, 30);
    lv_obj_set_x( ui_lblStation, 0 );
    lv_obj_set_y( ui_lblStation, -244 );
    lv_obj_set_align( ui_lblStation, LV_ALIGN_BOTTOM_LEFT );
    lv_obj_set_style_text_color(ui_lblStation, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT );
    lv_obj_set_style_text_opa(ui_lblStation, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblStation, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblStation, &lv_font_montserrat_28, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_label_set_text(ui_lblStation, "STATION_NAME");

    // TITLE - LABEL
    ui_lblTitle = lv_label_create(lv_scr_act());
    lv_obj_set_width( ui_lblTitle, 480);     
    lv_obj_set_height( ui_lblTitle, 30);
    lv_obj_set_x( ui_lblTitle, 0 );
    lv_obj_set_y( ui_lblTitle, -100 );
    lv_obj_set_align( ui_lblTitle, LV_ALIGN_BOTTOM_LEFT );
    lv_obj_set_style_text_color(ui_lblTitle, lv_color_hex(0xFFFEFE), LV_PART_MAIN | LV_STATE_DEFAULT );
    lv_obj_set_style_text_opa(ui_lblTitle, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblTitle, &lv_font_montserrat_28, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_label_set_text(ui_lblTitle,"TITLE_NAME");


    // setup i2s
    auto config = i2s.defaultConfig(TX_MODE);
    config.pin_bck = I2S_BCK;
    config.pin_ws = I2S_WS;
    config.pin_data = I2S_DATA;
    i2s.begin(config);

  // setup I2S based on sampling rate provided by decoder
    dec.setNotifyAudioChange(i2s);
    dec.begin();

    //  set initial volume low
    volume.begin(config); // we need to provide the bits_per_sample and channels
    volume.setVolume(0.03); // ca. 3% -> max = 1.0f

    bool ret = url.setMetadataCallback(printMetaData);

    // Rock'n Roll
    url.begin(urlstream);
  }
}


void loop() {

   // the order is important !!!
     copier.copy();       //Audio loop
     lv_timer_handler(); /* let the GUI do its work */

}
