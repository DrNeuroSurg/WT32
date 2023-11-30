#include <Arduino.h>
#include "wt32_sc01_plus.h"

lv_obj_t *label1;         // LGVL Label


void setup() {

  Serial.begin(115200);

  delay(100);


  Serial.println("Hello again!");
  
  if( !init_Display())
  {
      Serial.println("ERROR ON DISPLAY INIT !");
  }
  else
  {

  //SCREEN BLACK
  lv_obj_set_style_bg_color(lv_scr_act(), lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
  lv_obj_set_style_bg_opa(lv_scr_act(), 255, LV_PART_MAIN| LV_STATE_DEFAULT);

  //LABEL 
  label1 = lv_label_create(lv_scr_act());
  lv_obj_set_width( label1, 480);     
  lv_obj_set_height( label1, 30);
  lv_obj_set_x( label1, 0 );
  lv_obj_set_y( label1, -244 );
  lv_obj_set_align( label1, LV_ALIGN_BOTTOM_LEFT );
  lv_obj_set_style_text_color(label1, lv_color_hex(0xFFFEFE), LV_PART_MAIN | LV_STATE_DEFAULT );
  lv_obj_set_style_text_opa(label1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
  lv_obj_set_style_text_align(label1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
  lv_obj_set_style_text_font(label1, &lv_font_montserrat_28, LV_PART_MAIN| LV_STATE_DEFAULT);
   lv_label_set_text(label1, "DAS IST EIN LABEL");
  }

}

void loop() {

  lv_timer_handler(); /* let the GUI do its work */

}
