/*
 * SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include "lvgl.h"

void example_lvgl_demo_ui(lv_disp_t *disp)
{
    lv_obj_t *scr = lv_disp_get_scr_act(disp);

    lv_obj_t *label = lv_label_create(scr);
    lv_label_set_long_mode(label, LV_LABEL_LONG_SCROLL_CIRCULAR); /* Circular scroll */
    lv_label_set_text(label, "DLive DLive DLive");
    /* Size of the screen (if you use rotation 90 or 270, please set disp->driver->ver_res) */
    lv_obj_set_width(label, disp->driver->hor_res);
    lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 0);

    lv_obj_t *label2 = lv_label_create(scr);
    lv_label_set_long_mode(label2, LV_LABEL_LONG_SCROLL_CIRCULAR); /* Circular scroll */
    lv_label_set_text(label2, "ESP32 ESP32 ESP32");
    lv_obj_set_width(label2, disp->driver->hor_res);
    lv_obj_align(label2, LV_ALIGN_CENTER, 0, 0);

    lv_obj_t *label3 = lv_label_create(scr);
    lv_label_set_long_mode(label3, LV_LABEL_LONG_SCROLL_CIRCULAR); /* Circular scroll */
    lv_label_set_text(label3, "UDEV UDEV UDEV");
    lv_obj_set_width(label3, disp->driver->hor_res);
    lv_obj_align(label3, LV_ALIGN_BOTTOM_MID, 0, 0);
}

const char *demo_stirng = "Everyone has the right to freedom of thought, conscience and religion";

void example_lvgl_demo_ui_2(lv_disp_t *disp)
{
    lv_obj_t *scr = lv_disp_get_scr_act(disp);

    lv_obj_t *label = lv_label_create(scr);
    lv_label_set_long_mode(label, LV_LABEL_LONG_SCROLL_CIRCULAR); /* Circular scroll */
    lv_label_set_text(label, "DLive DLive DLive");
    /* Size of the screen (if you use rotation 90 or 270, please set disp->driver->ver_res) */
    lv_obj_set_width(label, disp->driver->hor_res);
    lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 0);

    LV_FONT_DECLARE(font_mate_60_1bpp);
    lv_obj_t *ui_font_demo1 = lv_label_create(scr);
    lv_label_set_text(ui_font_demo1, demo_stirng);
    lv_obj_align(ui_font_demo1, LV_ALIGN_TOP_LEFT, 10, 30);
    lv_obj_set_style_text_font(ui_font_demo1, &font_mate_60_1bpp, 0);
}