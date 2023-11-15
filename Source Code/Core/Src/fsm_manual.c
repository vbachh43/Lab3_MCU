/*
 * fsm_manual.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Admin
 */

#include "fsm_manual.h"

void fsm_manual_run(){
	switch (status){
		case MAN_RED:
			set_LED_Red();
			// MAN_RED timed out! Go AUTO_RED!
			if (timer1_flag == 1){
				status = AUTO_RED;
				setTimer1(500);
			}
			// Press Button => go MAN_GREEN
			if (isButton1Pressed() == 1){
				status = MAN_GREEN;
				setTimer1(300);
			}

			break;

		case MAN_GREEN:
			set_LED_Green();
			// MAN_GREEN timed out! Go AUTO_GREEN!
			if (timer1_flag == 1){
				status = AUTO_GREEN;
				setTimer1(300);
			}
			// Press Button => Go MAN_YELLOW!
			if (isButton1Pressed() == 1){
				status = MAN_YELLOW;
				setTimer1(200);
			}
			break;

		case MAN_YELLOW:
			set_LED_Yellow();
			// MAN_YELLOW timed out! Go AUTO_YELLOW!
			if (timer1_flag == 1){
				status = AUTO_YELLOW;
				setTimer1(200);
			}
			// Press Button => Go MAN_RED
			if (isButton1Pressed() == 1){
				status = MAN_RED;
				setTimer1(500);
			}
			break;

		default:
			break;
	}
}
