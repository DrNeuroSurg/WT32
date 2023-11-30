SET(SOURCES ui_Screen1.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_img_btn_1_inact_png.c
    ui_img_btn_1_act_png.c
    ui_img_pot_hor_line_png.c
    ui_img_pot_hor_knob_png.c
    fonts/ui_font_Alpha.c
    fonts/ui_font_Alpha48.c)

add_library(ui ${SOURCES})
