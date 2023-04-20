/*
 * led7display.h
 *
 *  Created on: Nov 3, 2022
 *      Author: Christian
 */

#ifndef INC_LED7DISPLAY_H_
#define INC_LED7DISPLAY_H_
#include "main.h"

extern uint16_t LED_OFF[];
extern int LED_BUFFER[];
extern uint16_t LED7SEG_ON [];
extern uint16_t LED7SEG_OFF [];
extern int led;

#define MAX_LED 4;
extern int index_led;
extern int led_buffer[];
void led_7_seg_disp(int num);

#endif /* INC_LED7DISPLAY_H_ */
