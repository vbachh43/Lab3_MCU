/*
 * button.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */

#include "button.h"

int button1_flag = 0;

int Key_Reg0 = NORMAL_STATE;
int Key_Reg1 = NORMAL_STATE;
int Key_Reg2 = NORMAL_STATE;
int Key_Reg3 = NORMAL_STATE;
int Pressed_Key_Timer = 200;

int isButton1Pressed(){
	if (button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(){
	button1_flag = 1;
}

void getKeyInput(){
	Key_Reg0 = Key_Reg1;
	Key_Reg1 = Key_Reg2;
	Key_Reg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);

	if ((Key_Reg0 == Key_Reg1) && (Key_Reg1 == Key_Reg2)){
		// Nhan tha: Key_Reg2 == SET
		if (Key_Reg3 != Key_Reg2){
			Key_Reg3 = Key_Reg2;
			if (Key_Reg2 == PRESSED_STATE){
				// TO DO
				subKeyProcess();
				Pressed_Key_Timer = 200;
			}
		}
		// Nhan de: Key_Reg2 == RESET
		else{
			Pressed_Key_Timer --;
			if (Pressed_Key_Timer == 0){
				// TO DO
				if (Key_Reg2 == PRESSED_STATE){
					subKeyProcess();
				}
				Pressed_Key_Timer = 200;
			}
		}
	}
}
