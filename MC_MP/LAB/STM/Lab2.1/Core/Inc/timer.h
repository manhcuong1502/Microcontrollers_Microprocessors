/*
 * timer.h
 *
 *  Created on: Oct 13, 2022
 *      Author: Christian
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_
#include "main.h"
#include "led7display.h"

extern int counter;
extern int counter0;
extern int counter1;
extern int timerflag0;
extern int timerflag1;

void settimer_ex4_0();
void settimer_ex4_1();

void timerRun_ex2();
void timerRun_ex3();
void timerRun_ex4();

#endif /* INC_TIMER_H_ */
