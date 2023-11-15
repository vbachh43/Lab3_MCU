/*
 * global.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */

#include "global.h"


int led_buffer [4] = {0 , 0 , 0 , 0};
int mode = 0;

int status = 0;
int status_a = 0;
int timer_7seg = 0;

int prescaler_blink = 0;
int period_blink = 0;

int duration_red = 0;
int duration_green = 0;
int duration_yellow = 0;

void set_LED_Init(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}
//----------------------------------------------------------------------------------
void set_LED_Red(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}

void set_LED_Green(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}

void set_LED_Yellow(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}
//-----------------------------------------------------------------------------------
void set_LED_Init_a(){
	HAL_GPIO_WritePin(LED_RED_A_GPIO_Port, LED_RED_A_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_A_GPIO_Port, LED_GREEN_A_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_A_GPIO_Port, LED_YELLOW_A_Pin, GPIO_PIN_SET);
}

void set_LED_Red_a(){
	HAL_GPIO_WritePin(LED_RED_A_GPIO_Port, LED_RED_A_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_A_GPIO_Port, LED_GREEN_A_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_A_GPIO_Port, LED_YELLOW_A_Pin, GPIO_PIN_SET);
}

void set_LED_Green_a(){
	HAL_GPIO_WritePin(LED_RED_A_GPIO_Port, LED_RED_A_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_A_GPIO_Port, LED_GREEN_A_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_A_GPIO_Port, LED_YELLOW_A_Pin, GPIO_PIN_SET);
}

void set_LED_Yellow_a(){
	HAL_GPIO_WritePin(LED_RED_A_GPIO_Port, LED_RED_A_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_A_GPIO_Port, LED_GREEN_A_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_A_GPIO_Port, LED_YELLOW_A_Pin, GPIO_PIN_RESET);
}


