/*
 * display_7seg.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Admin
 */

#include "display_7seg.h"

void display_7seg(int counter){
	switch(counter){
		case 0:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, segb_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, segc_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, segd_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sege_Pin, RESET);
			HAL_GPIO_WritePin(segf_GPIO_Port, segf_Pin, RESET);
			HAL_GPIO_WritePin(segg_GPIO_Port, segg_Pin, SET);
			break;

		case 1:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segb_GPIO_Port, segb_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, segc_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, segd_Pin, SET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sege_Pin, SET);
			HAL_GPIO_WritePin(segf_GPIO_Port, segf_Pin, SET);
			HAL_GPIO_WritePin(segg_GPIO_Port, segg_Pin, SET);
			break;

		case 2:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, segb_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, segc_Pin, SET);
			HAL_GPIO_WritePin(segd_GPIO_Port, segd_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sege_Pin, RESET);
			HAL_GPIO_WritePin(segf_GPIO_Port, segf_Pin, SET);
			HAL_GPIO_WritePin(segg_GPIO_Port, segg_Pin, RESET);
			break;

		case 3:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, segb_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, segc_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, segd_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sege_Pin, SET);
			HAL_GPIO_WritePin(segf_GPIO_Port, segf_Pin, SET);
			HAL_GPIO_WritePin(segg_GPIO_Port, segg_Pin, RESET);
			break;

		case 4:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segb_GPIO_Port, segb_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, segc_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, segd_Pin, SET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sege_Pin, SET);
			HAL_GPIO_WritePin(segf_GPIO_Port, segf_Pin, RESET);
			HAL_GPIO_WritePin(segg_GPIO_Port, segg_Pin, RESET);
			break;

		case 5:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, segb_Pin, SET);
			HAL_GPIO_WritePin(segc_GPIO_Port, segc_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, segd_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sege_Pin, SET);
			HAL_GPIO_WritePin(segf_GPIO_Port, segf_Pin, RESET);
			HAL_GPIO_WritePin(segg_GPIO_Port, segg_Pin, RESET);
			break;

		case 6:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, segb_Pin, SET);
			HAL_GPIO_WritePin(segc_GPIO_Port, segc_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, segd_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sege_Pin, RESET);
			HAL_GPIO_WritePin(segf_GPIO_Port, segf_Pin, RESET);
			HAL_GPIO_WritePin(segg_GPIO_Port, segg_Pin, RESET);
			break;

		case 7:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, segb_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, segc_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, segd_Pin, SET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sege_Pin, SET);
			HAL_GPIO_WritePin(segf_GPIO_Port, segf_Pin, SET);
			HAL_GPIO_WritePin(segg_GPIO_Port, segg_Pin, SET);
			break;

		case 8:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, segb_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, segc_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, segd_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sege_Pin, RESET);
			HAL_GPIO_WritePin(segf_GPIO_Port, segf_Pin, RESET);
			HAL_GPIO_WritePin(segg_GPIO_Port, segg_Pin, RESET);
			break;

		case 9:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, segb_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, segc_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, segd_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sege_Pin, SET);
			HAL_GPIO_WritePin(segf_GPIO_Port, segf_Pin, RESET);
			HAL_GPIO_WritePin(segg_GPIO_Port, segg_Pin, RESET);
			break;

		default:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segb_GPIO_Port, segb_Pin, SET);
			HAL_GPIO_WritePin(segc_GPIO_Port, segc_Pin, SET);
			HAL_GPIO_WritePin(segd_GPIO_Port, segd_Pin, SET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sege_Pin, SET);
			HAL_GPIO_WritePin(segf_GPIO_Port, segf_Pin, SET);
			HAL_GPIO_WritePin(segg_GPIO_Port, segg_Pin, SET);
			break;
	}
}

void update_7seg(int index){
	switch(index){
	case 0:
	// Display the first 7 SEG with led_buffer [0]
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);

		display_7seg(led_buffer[index]);
		break;

	case 1:
	// Display the second 7 SEG with led_buffer [1]
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);

		display_7seg(led_buffer[index]);
		break;

	case 2:
	// Display the third 7 SEG with led_buffer [2]
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);

		display_7seg(led_buffer[index]);
		break;

	case 3:
	// Display the forth 7 SEG with led_buffer [3]
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);

		display_7seg(led_buffer[index]);
		break;

	default:
		break ;
	}
}
