/*
 * fsm_automatic.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */
#include "fsm_automatic.h"

void fsm_automatic_run(){
	switch (status){
	case INIT:
		// TO DO
		set_LED_Init();
		setTimer1(100);

		status = AUTO_RED;
		setTimer1(500);
		break;

	case AUTO_RED:
		// TO DO
		set_LED_Red();
		// RED time out! Go GREEN
		if (timer1_flag == 1){
			status = AUTO_GREEN;
			setTimer1(300);
		}
		// Button is pressed => Go MAN_RED
		if (isButton1Pressed() == 1){
			status = MAN_RED;
			setTimer1(500);
		}
		break;

	case AUTO_GREEN:
		// TO DO
		set_LED_Green();
		// GREEN time out! Go YELLOW
		if (timer1_flag == 1){
			status = AUTO_YELLOW;
			setTimer1(200);
		}
		// Button is pressed => Go MAN_GREEN
		if (isButton1Pressed() == 1){
			status = MAN_GREEN;
			setTimer1(300);
		}
		break;

	case AUTO_YELLOW:
		// TO DO
		set_LED_Yellow();
		// YELLOW time out! Go RED
		if (timer1_flag == 1){
			status = AUTO_RED;
			setTimer1(500);
		}
		// Button is pressed => Go MAN_YELLOW
		if (isButton1Pressed() == 1){
			status = MAN_YELLOW;
			setTimer1(200);
		}
		break;

	default:
		break;
	}
}
