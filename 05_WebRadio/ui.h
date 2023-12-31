// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.2.0
// Project name: Radio

#ifndef _RADIO_UI_H
#define _RADIO_UI_H

#ifdef __cplusplus
extern "C" {
#endif

    #include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t *ui_Screen1;
extern lv_obj_t *ui_lblStation;
extern lv_obj_t *ui_lblInterpret;
extern lv_obj_t *ui_lblTitle;
extern lv_obj_t *ui_btnStation1;
extern lv_obj_t *ui_Label1;
extern lv_obj_t *ui_btnStation2;
extern lv_obj_t *ui_Label2;
extern lv_obj_t *ui_btnStation3;
extern lv_obj_t *ui_Label3;
extern lv_obj_t *ui_btnStation4;
extern lv_obj_t *ui_Label4;
extern lv_obj_t *ui_SliderGroup;
extern lv_obj_t *ui_volumeSlider;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_btn_1_inact_png);   // assets/btn_1_inact.png
LV_IMG_DECLARE( ui_img_btn_1_act_png);   // assets/btn_1_act.png
LV_IMG_DECLARE( ui_img_pot_hor_line_png);   // assets/pot_hor_line.png
LV_IMG_DECLARE( ui_img_pot_hor_knob_png);   // assets/pot_hor_knob.png

LV_FONT_DECLARE( ui_font_Alpha);
LV_FONT_DECLARE( ui_font_Alpha48);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
