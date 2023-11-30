// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.2.0
// Project name: Radio

#include "ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_lblStation = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_lblStation, 480);
lv_obj_set_height( ui_lblStation, 40);
lv_obj_set_style_text_color(ui_lblStation, lv_color_hex(0xFA5B5B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_lblStation, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_lblStation, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lblStation, &lv_font_montserrat_30, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_lblInterpret = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_lblInterpret, 480);
lv_obj_set_height( ui_lblInterpret, 30);
lv_obj_set_x( ui_lblInterpret, 0 );
lv_obj_set_y( ui_lblInterpret, -244 );
lv_obj_set_align( ui_lblInterpret, LV_ALIGN_BOTTOM_LEFT );
lv_obj_set_style_text_color(ui_lblInterpret, lv_color_hex(0xFFFEFE), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_lblInterpret, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_lblInterpret, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lblInterpret, &lv_font_montserrat_28, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_lblTitle = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_lblTitle, 480);
lv_obj_set_height( ui_lblTitle, 30);
lv_obj_set_x( ui_lblTitle, 0 );
lv_obj_set_y( ui_lblTitle, -193 );
lv_obj_set_align( ui_lblTitle, LV_ALIGN_BOTTOM_LEFT );
lv_obj_set_style_text_color(ui_lblTitle, lv_color_hex(0xFFFEFE), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_lblTitle, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_lblTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lblTitle, &lv_font_montserrat_28, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_btnStation1 = lv_imgbtn_create(ui_Screen1);
lv_imgbtn_set_src(ui_btnStation1, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_btn_1_inact_png, NULL);
lv_imgbtn_set_src(ui_btnStation1, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_btn_1_act_png, NULL);
lv_imgbtn_set_src(ui_btnStation1, LV_IMGBTN_STATE_DISABLED, NULL, &ui_img_btn_1_inact_png, NULL);
lv_imgbtn_set_src(ui_btnStation1, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui_img_btn_1_act_png, NULL);
lv_imgbtn_set_src(ui_btnStation1, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_btn_1_act_png, NULL);
lv_imgbtn_set_src(ui_btnStation1, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui_img_btn_1_inact_png, NULL);
lv_obj_set_height( ui_btnStation1, 97);
lv_obj_set_width( ui_btnStation1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_align( ui_btnStation1, LV_ALIGN_BOTTOM_LEFT );

ui_Label1 = lv_label_create(ui_btnStation1);
lv_obj_set_width( ui_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label1,"1");
lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label1, &ui_font_Alpha48, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_btnStation2 = lv_imgbtn_create(ui_Screen1);
lv_imgbtn_set_src(ui_btnStation2, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_btn_1_inact_png, NULL);
lv_imgbtn_set_src(ui_btnStation2, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_btn_1_act_png, NULL);
lv_imgbtn_set_src(ui_btnStation2, LV_IMGBTN_STATE_DISABLED, NULL, &ui_img_btn_1_inact_png, NULL);
lv_imgbtn_set_src(ui_btnStation2, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui_img_btn_1_act_png, NULL);
lv_imgbtn_set_src(ui_btnStation2, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_btn_1_act_png, NULL);
lv_imgbtn_set_src(ui_btnStation2, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui_img_btn_1_inact_png, NULL);
lv_obj_set_height( ui_btnStation2, 97);
lv_obj_set_width( ui_btnStation2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_btnStation2, 120 );
lv_obj_set_y( ui_btnStation2, 0 );
lv_obj_set_align( ui_btnStation2, LV_ALIGN_BOTTOM_LEFT );

ui_Label2 = lv_label_create(ui_btnStation2);
lv_obj_set_width( ui_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label2,"2");
lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label2, &ui_font_Alpha48, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_btnStation3 = lv_imgbtn_create(ui_Screen1);
lv_imgbtn_set_src(ui_btnStation3, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_btn_1_inact_png, NULL);
lv_imgbtn_set_src(ui_btnStation3, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_btn_1_act_png, NULL);
lv_imgbtn_set_src(ui_btnStation3, LV_IMGBTN_STATE_DISABLED, NULL, &ui_img_btn_1_inact_png, NULL);
lv_imgbtn_set_src(ui_btnStation3, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui_img_btn_1_act_png, NULL);
lv_imgbtn_set_src(ui_btnStation3, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_btn_1_act_png, NULL);
lv_imgbtn_set_src(ui_btnStation3, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui_img_btn_1_inact_png, NULL);
lv_obj_set_height( ui_btnStation3, 97);
lv_obj_set_width( ui_btnStation3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_btnStation3, 240 );
lv_obj_set_y( ui_btnStation3, 0 );
lv_obj_set_align( ui_btnStation3, LV_ALIGN_BOTTOM_LEFT );

ui_Label3 = lv_label_create(ui_btnStation3);
lv_obj_set_width( ui_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label3,"3");
lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label3, &ui_font_Alpha48, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_btnStation4 = lv_imgbtn_create(ui_Screen1);
lv_imgbtn_set_src(ui_btnStation4, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_btn_1_inact_png, NULL);
lv_imgbtn_set_src(ui_btnStation4, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_btn_1_act_png, NULL);
lv_imgbtn_set_src(ui_btnStation4, LV_IMGBTN_STATE_DISABLED, NULL, &ui_img_btn_1_inact_png, NULL);
lv_imgbtn_set_src(ui_btnStation4, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui_img_btn_1_act_png, NULL);
lv_imgbtn_set_src(ui_btnStation4, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_btn_1_act_png, NULL);
lv_imgbtn_set_src(ui_btnStation4, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui_img_btn_1_inact_png, NULL);
lv_obj_set_height( ui_btnStation4, 97);
lv_obj_set_width( ui_btnStation4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_btnStation4, 360 );
lv_obj_set_y( ui_btnStation4, 0 );
lv_obj_set_align( ui_btnStation4, LV_ALIGN_BOTTOM_LEFT );

ui_Label4 = lv_label_create(ui_btnStation4);
lv_obj_set_width( ui_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label4,"4");
lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label4, &ui_font_Alpha48, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SliderGroup = lv_obj_create(ui_Screen1);
lv_obj_set_height( ui_SliderGroup, 128);
lv_obj_set_width( ui_SliderGroup, lv_pct(100));
lv_obj_set_x( ui_SliderGroup, 0 );
lv_obj_set_y( ui_SliderGroup, 34 );
lv_obj_set_align( ui_SliderGroup, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_SliderGroup, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_SliderGroup, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_SliderGroup, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_main_stop(ui_SliderGroup, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_stop(ui_SliderGroup, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_SliderGroup, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_SliderGroup, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_SliderGroup, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_SliderGroup, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_SliderGroup, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_volumeSlider = lv_slider_create(ui_SliderGroup);
lv_slider_set_range(ui_volumeSlider, 0,10);
lv_obj_set_width( ui_volumeSlider, 368);
lv_obj_set_height( ui_volumeSlider, 80);
lv_obj_set_x( ui_volumeSlider, 2 );
lv_obj_set_y( ui_volumeSlider, 0 );
lv_obj_set_align( ui_volumeSlider, LV_ALIGN_CENTER );
lv_obj_set_style_bg_color(ui_volumeSlider, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_volumeSlider, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_volumeSlider, &ui_img_pot_hor_line_png, LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_pad_left(ui_volumeSlider, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_volumeSlider, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_volumeSlider, 35, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_volumeSlider, 35, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_volumeSlider, lv_color_hex(0x50FF7D), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_volumeSlider, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_volumeSlider, lv_color_hex(0x50FF7D), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_volumeSlider, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_volumeSlider, 50, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_volumeSlider, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_volumeSlider, 12, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_main_stop(ui_volumeSlider, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_stop(ui_volumeSlider, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_volumeSlider, &ui_img_pot_hor_knob_png, LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_color(ui_volumeSlider, lv_color_hex(0x000000), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_volumeSlider, 100, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_volumeSlider, 30, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_volumeSlider, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_ofs_x(ui_volumeSlider, 5, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_ofs_y(ui_volumeSlider, 5, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_volumeSlider, -2, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_volumeSlider, -1, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_volumeSlider, -6, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_volumeSlider, -4, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_volumeSlider, lv_color_hex(0x50FF7D), LV_PART_KNOB | LV_STATE_PRESSED );
lv_obj_set_style_bg_opa(ui_volumeSlider, 255, LV_PART_KNOB| LV_STATE_PRESSED);
lv_obj_set_style_shadow_color(ui_volumeSlider, lv_color_hex(0x50FF7D), LV_PART_KNOB | LV_STATE_PRESSED );
lv_obj_set_style_shadow_opa(ui_volumeSlider, 255, LV_PART_KNOB| LV_STATE_PRESSED);
lv_obj_set_style_shadow_width(ui_volumeSlider, 40, LV_PART_KNOB| LV_STATE_PRESSED);
lv_obj_set_style_shadow_spread(ui_volumeSlider, 0, LV_PART_KNOB| LV_STATE_PRESSED);
lv_obj_set_style_shadow_ofs_x(ui_volumeSlider, 0, LV_PART_KNOB| LV_STATE_PRESSED);
lv_obj_set_style_shadow_ofs_y(ui_volumeSlider, 0, LV_PART_KNOB| LV_STATE_PRESSED);

}
