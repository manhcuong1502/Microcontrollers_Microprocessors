/*
 * button.c
 *
 *  Created on: Oct 1, 2022
 *      Author: Christian
 */
#include "button.h"

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int TimeOutForKeyPress = 500;

void subKeyProcess(){
	//TODO
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
}

void getKeyInput(){
  KeyReg2 = KeyReg1;
  KeyReg1 = KeyReg0;
  KeyReg0 = HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin);
  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
    if (KeyReg2 != KeyReg3){
      KeyReg3 = KeyReg2;

      if (KeyReg3 == PRESSED_STATE){
        TimeOutForKeyPress = 500;
        subKeyProcess();
      }

    }else{
       TimeOutForKeyPress --;
        if (TimeOutForKeyPress == 0){
          KeyReg3 = NORMAL_STATE;
        }
    }
  }
}
