/*
 * button.h
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();

void getKey1Input();
void getKey2Input();
void getKey3Input();

#endif /* INC_BUTTON_H_ */
