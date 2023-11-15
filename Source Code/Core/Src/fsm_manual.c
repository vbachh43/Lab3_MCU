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
			mode = 2;
			led_buffer[1] = mode;
			if (duration_red < 10){
				led_buffer[2] = 0;
				led_buffer[3] = duration_red;

			}
			else{
				led_buffer[2] = duration_red / 10;
				led_buffer[3] = duration_red % 10;
			}

			set_LED_Red();
			set_LED_Red_a();
			// Toggle at 2Hz
			if (timer1_flag == 1){
				HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
				setTimer1((4 * 1000000) /((prescaler_blink + 1)*(period_blink + 1)));
			}
			if (timer3_flag == 1){
				HAL_GPIO_TogglePin(LED_RED_A_GPIO_Port, LED_RED_A_Pin);
				setTimer3((4 * 1000000) /((prescaler_blink + 1)*(period_blink + 1)));
			}

			// Press Button1 => go MAN_GREEN
			if (isButton1Pressed() == 1){
				status = MAN_GREEN;
				status_a = MAN_YELLOW;
			}

			// Press Button2 => Modify duration of RED_LED
			if (isButton2Pressed() == 1){
				if (duration_red <= 99) duration_red ++;
				else duration_red = 1;

				if (duration_red < 10){
					led_buffer[2] = 0;
					led_buffer[3] = duration_red;

				}
				else{
					led_buffer[2] = duration_red / 10;
					led_buffer[3] = duration_red % 10;
				}
			}

			if (isButton3Pressed() == 1){
				status = MAN_GREEN;
				status_a = MAN_GREEN;
			}
			break;

		case MAN_GREEN:
			mode = 3;
			led_buffer[1] = mode;
			if (duration_green < 10){
				led_buffer[2] = 0;
				led_buffer[3] = duration_green;

			}
			else{
				led_buffer[2] = duration_green / 10;
				led_buffer[3] = duration_green % 10;
			}

			set_LED_Green();
			set_LED_Green_a();
			// Toggle at 2Hz
			if (timer1_flag == 1){
				HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
				setTimer1((4 * 1000000) /((prescaler_blink + 1)*(period_blink + 1)));
			}
			if (timer3_flag == 1){
				HAL_GPIO_TogglePin(LED_GREEN_A_GPIO_Port, LED_GREEN_A_Pin);
				setTimer3((4 * 1000000) /((prescaler_blink + 1)*(period_blink + 1)));
			}

			// Press Button1 => go MAN_YELLOW
			if (isButton1Pressed() == 1){
				status = MAN_YELLOW;
				status_a = MAN_YELLOW;
			}

			// Press Button2 => Modify duration of GREEN_LED
			if (isButton2Pressed() == 1){
				if (duration_green <= 99) duration_green ++;
				else duration_green = 1;

				if (duration_green < 10){
					led_buffer[2] = 0;
					led_buffer[3] = duration_green;

				}
				else{
					led_buffer[2] = duration_green / 10;
					led_buffer[3] = duration_green % 10;
				}
			}

			if (isButton3Pressed() == 1){
				status = MAN_YELLOW;
				status_a = MAN_YELLOW;
			}
			break;

		case MAN_YELLOW:
			mode = 4;
			led_buffer[1] = mode;
			if (duration_yellow < 10){
				led_buffer[2] = 0;
				led_buffer[3] = duration_yellow;

			}
			else{
				led_buffer[2] = duration_yellow / 10;
				led_buffer[3] = duration_yellow % 10;
			}

			set_LED_Yellow();
			set_LED_Yellow_a();
			// Toggle at 2Hz
			if (timer1_flag == 1){
				HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
				setTimer1((4 * 1000000) /((prescaler_blink + 1)*(period_blink + 1)));
			}
			if (timer3_flag == 1){
				HAL_GPIO_TogglePin(LED_YELLOW_A_GPIO_Port, LED_YELLOW_A_Pin);
				setTimer3((4 * 1000000) /((prescaler_blink + 1)*(period_blink + 1)));
			}

			// Press Button1 => go AUTO_RED
			if (isButton1Pressed() == 1){
				status = AUTO_RED;
				setTimer1(duration_red*100);
			}

			// Press Button2 => Modify duration of YELLOW_LED
			if (isButton2Pressed() == 1){
				if (duration_yellow <= 99) duration_yellow ++;
				else duration_yellow = 1;

				if (duration_yellow < 10){
					led_buffer[2] = 0;
					led_buffer[3] = duration_yellow;

				}
				else{
					led_buffer[2] = duration_yellow / 10;
					led_buffer[3] = duration_yellow % 10;
				}
			}

			if (isButton3Pressed() == 1){
				status = AUTO_RED;
				status_a = AUTO_RED_a;
			}
			break;

		default:
			break;
	}
}
