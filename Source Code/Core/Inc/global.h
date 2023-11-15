/*
 * global.h
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "main.h"
#include "button.h"

#define INIT          1
#define AUTO_RED      2
#define AUTO_GREEN    3
#define AUTO_YELLOW   4

#define MAN_RED       12
#define MAN_GREEN     13
#define MAN_YELLOW    14

extern int status;
extern int timer_7seg;
extern int button1_flag, button2_flag, button3_flag;

void set_LED_Init();
void set_LED_Red();
void set_LED_Green();
void set_LED_Yellow();

#endif /* INC_GLOBAL_H_ */
