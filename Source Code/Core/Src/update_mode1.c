/*
 * update_mode1.c
 *
 *  Created on: Nov 15, 2023
 *      Author: Admin
 */
#include "update_mode1.h"
#include "global.h"

void update_mode1(){
	if (timer1_flag == 1){
		switch (status){
			case AUTO_RED:
				if (duration_red < 10){
					led_buffer[0] = 0;
					led_buffer[1] = duration_red;
				}
				else{
					led_buffer[0] = duration_red / 10;
					led_buffer[1] = duration_red % 10;
				}
				break;

			case AUTO_GREEN:
				if (duration_green < 10){
					led_buffer[0] = 0;
					led_buffer[1] = duration_green;
				}
				else{
					led_buffer[0] = duration_green / 10;
					led_buffer[1] = duration_green % 10;
				}
				break;

			case AUTO_YELLOW:
				if (duration_yellow < 10){
					led_buffer[0] = 0;
					led_buffer[1] = duration_yellow;
				}
				else{
					led_buffer[0] = duration_yellow / 10;
					led_buffer[1] = duration_yellow % 10;
				}
				break;
		}

		switch (status_a){
			case AUTO_RED_a:
				if (duration_red < 10){
					led_buffer[2] = 0;
					led_buffer[3] = duration_red;
				}
				else{
					led_buffer[2] = duration_red / 10;
					led_buffer[3] = duration_red % 10;
				}
				break;

			case AUTO_GREEN:
				if (duration_green < 10){
					led_buffer[2] = 0;
					led_buffer[3] = duration_green;
				}
				else{
					led_buffer[2] = duration_green / 10;
					led_buffer[3] = duration_green % 10;
				}
				break;

			case AUTO_YELLOW:
				if (duration_yellow < 10){
					led_buffer[2] = 0;
					led_buffer[3] = duration_yellow;
				}
				else{
					led_buffer[2] = duration_yellow / 10;
					led_buffer[3] = duration_yellow % 10;
				}
				break;
		}
    }
}

