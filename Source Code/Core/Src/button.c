/*
 * button.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */

#include "button.h"

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int Key_Reg0 = NORMAL_STATE;
int Key_Reg1 = NORMAL_STATE;
int Key_Reg2 = NORMAL_STATE;
int Key_Reg3 = NORMAL_STATE;

int Key_Reg0a = NORMAL_STATE;
int Key_Reg1a = NORMAL_STATE;
int Key_Reg2a = NORMAL_STATE;
int Key_Reg3a = NORMAL_STATE;

int Key_Reg0b = NORMAL_STATE;
int Key_Reg1b = NORMAL_STATE;
int Key_Reg2b = NORMAL_STATE;
int Key_Reg3b = NORMAL_STATE;

int Pressed_Key_Timer = 100;
int Pressed_Key_Timer_a = 100;
int Pressed_Key_Timer_b = 100;

int isButton1Pressed(){
	if (button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}

int isButton2Pressed(){
	if (button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}

int isButton3Pressed(){
	if (button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void getKey1Input(){
	Key_Reg0 = Key_Reg1;
	Key_Reg1 = Key_Reg2;
	Key_Reg2 = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);

	if ((Key_Reg0 == Key_Reg1) && (Key_Reg1 == Key_Reg2)){
		// Nhan tha: Key_Reg2 == SET
		if (Key_Reg3 != Key_Reg2){
			Key_Reg3 = Key_Reg2;
			if (Key_Reg2 == PRESSED_STATE){
				// TO DO
				button1_flag = 1;
				Pressed_Key_Timer = 100;
			}
		}
		// Nhan de: Key_Reg2 == RESET
		else{
			Pressed_Key_Timer --;
			if (Pressed_Key_Timer <= 0){
				// TO DO
				if (Key_Reg2 == PRESSED_STATE){
					button1_flag = 1;
				}
				Pressed_Key_Timer = 100;
			}
		}
	}
}

void getKey2Input(){
	Key_Reg0a = Key_Reg1a;
	Key_Reg1a = Key_Reg2a;
	Key_Reg2a = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);

	if ((Key_Reg0a == Key_Reg1a) && (Key_Reg1a == Key_Reg2a)){
		// Nhan tha: Key_Reg2 == SET
		if (Key_Reg3a != Key_Reg2a){
			Key_Reg3a = Key_Reg2a;
			if (Key_Reg2a == PRESSED_STATE){
				// TO DO
				button2_flag = 1;
				Pressed_Key_Timer_a = 100;
			}
		}
		// Nhan de: Key_Reg2 == RESET
		else{
			Pressed_Key_Timer_a --;
			if (Pressed_Key_Timer_a == 0){
				// TO DO
				if (Key_Reg2a == PRESSED_STATE){
					button2_flag = 1;
				}
				Pressed_Key_Timer_a = 100;
			}
		}
	}
}

void getKey3Input(){
	Key_Reg0b = Key_Reg1b;
	Key_Reg1b = Key_Reg2b;
	Key_Reg2b = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);

	if ((Key_Reg0b == Key_Reg1b) && (Key_Reg1b == Key_Reg2b)){
		// Nhan tha: Key_Reg2 == SET
		if (Key_Reg3b != Key_Reg2b){
			Key_Reg3b = Key_Reg2b;
			if (Key_Reg2b == PRESSED_STATE){
				// TO DO
				button3_flag = 1;
				Pressed_Key_Timer_b = 100;
			}
		}
		// Nhan de: Key_Reg2 == RESET
		else{
			Pressed_Key_Timer_b --;
			if (Pressed_Key_Timer_b == 0){
				// TO DO
				if (Key_Reg2b == PRESSED_STATE){
					button3_flag = 1;
				}
				Pressed_Key_Timer_b = 100;
			}
		}
	}
}
