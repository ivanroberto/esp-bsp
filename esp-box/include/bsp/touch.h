/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

/**
 * @file
 * @brief BSP Touchscreen
 *
 * This file offers API for basic touchscreen initialization.
 * It is useful for users who want to use the touchscreen without the default Graphical Library LVGL.
 *
 * For standard LCD initialization with LVGL graphical library, you can call all-in-one function bsp_display_start().
 */

#pragma once
#include "esp_lcd_touch.h"

/**
 * @brief Create new touchscreen
 *
 * If you want to free resources allocated by this function, you can use esp_lcd_touch API, ie.:
 *
 * \code{.c}
 * esp_lcd_touch_del(tp);
 * \endcode
 *
 * @param[out] ret_touch esp_lcd_touch touchscreen handle
 * @return
 *      - ESP_OK                On success
 *      - Else                  esp_lcd_touch failure
 */
esp_err_t bsp_touch_new(esp_lcd_touch_handle_t *ret_touch);