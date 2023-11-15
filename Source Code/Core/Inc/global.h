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

#define INIT            1
#define AUTO_RED        2
#define AUTO_GREEN      3
#define AUTO_YELLOW     4

#define INIT_a          5
#define AUTO_RED_a      6
#define AUTO_GREEN_a    7
#define AUTO_YELLOW_a   8

#define MAN_RED         12
#define MAN_GREEN       13
#define MAN_YELLOW      14

extern int led_buffer [4];
extern int mode;

extern int status;
extern int status_a;

extern int timer_7seg;
extern int button1_flag, button2_flag, button3_flag;

extern int prescaler_blink;
extern int period_blink;

extern int duration_red;
extern int duration_green;
extern int duration_yellow;

void set_LED_Init();
void set_LED_Init_a();

void set_LED_Red();
void set_LED_Green();
void set_LED_Yellow();

void set_LED_Red_a();
void set_LED_Green_a();
void set_LED_Yellow_a();

#endif /* INC_GLOBAL_H_ */
