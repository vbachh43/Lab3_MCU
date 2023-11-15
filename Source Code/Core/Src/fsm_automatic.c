/*
 * fsm_automatic.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */
#include "fsm_automatic.h"
#include "global.h"

void fsm_automatic_run(){
	mode = 1;
	led_buffer[1] = mode;

	switch (status){
		case INIT:
			set_LED_Init();
			// go red
			status = AUTO_RED;
			setTimer1(duration_red*100);
			break;

		case AUTO_RED:
			// TO DO
			set_LED_Red();
			// RED time out! Go GREEN
			if (timer1_flag == 1){
				status = AUTO_GREEN;
				setTimer1(duration_green*100);
			}
			// Button is pressed => Go MAN_RED
			if (isButton1Pressed() == 1){
				status = MAN_RED;
			}
			break;

		case AUTO_GREEN:
			// TO DO
			set_LED_Green();
			// GREEN time out! Go YELLOW
			if (timer1_flag == 1){
				status = AUTO_YELLOW;
				setTimer1(duration_yellow*100);
			}
			// Button is pressed => Go MAN_GREEN
			if (isButton1Pressed() == 1){
				status = MAN_RED;
			}
			break;

		case AUTO_YELLOW:
			// TO DO
			set_LED_Yellow();
			// YELLOW time out! Go RED
			if (timer1_flag == 1){
				status = AUTO_RED;
				setTimer1(duration_red*100);
			}
			// Button is pressed => Go MAN_YELLOW
			if (isButton1Pressed() == 1){
				status = MAN_RED;
			}
			break;

		default:
			break;
	}
}

// ---------------------------------------------------------------------

void fsm_automatic_run_a(){
	mode = 1;
	led_buffer[1] = mode;

	switch (status_a){
		case INIT_a:
			set_LED_Init_a();
			// go to red
			status_a = AUTO_GREEN_a;
			setTimer3(duration_green*100);
			break;

		case AUTO_RED_a:
			// TO DO
			set_LED_Red_a();
			// RED time out! Go GREEN
			if (timer3_flag == 1){
				status_a = AUTO_GREEN_a;
				setTimer3(duration_green*100);
			}
			// Button is pressed => Go MAN_RED
			if (isButton1Pressed() == 1){
				status_a = MAN_RED;
			}
			break;

		case AUTO_GREEN_a:
			// TO DO
			set_LED_Green_a();
			// GREEN time out! Go YELLOW
			if (timer3_flag == 1){
				status_a = AUTO_YELLOW_a;
				setTimer3(duration_yellow*100);
			}
			// Button is pressed => Go MAN_GREEN
			if (isButton1Pressed() == 1){
				status_a = MAN_RED;
			}
			break;

		case AUTO_YELLOW_a:
			// TO DO
			set_LED_Yellow_a();
			// YELLOW time out! Go RED
			if (timer3_flag == 1){
				status_a = AUTO_RED_a;
				setTimer3(duration_red*100);
			}
			// Button is pressed => Go MAN_YELLOW
			if (isButton1Pressed() == 1){
				status_a = MAN_RED;
			}
			break;

		default:
			break;
		}
}
