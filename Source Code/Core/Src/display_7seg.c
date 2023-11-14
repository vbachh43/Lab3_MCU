/*
 * display_7seg.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Admin
 */

#include "display_7seg.h"

void display_7seg(){
	switch(timer_7seg){
		case 0:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segf_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segg_GPIO_Port, sega_Pin, SET);
			break;

		case 1:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segb_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segf_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segg_GPIO_Port, sega_Pin, SET);
			break;

		case 2:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segd_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segf_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segg_GPIO_Port, sega_Pin, RESET);
			break;

		case 3:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segf_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segg_GPIO_Port, sega_Pin, SET);
			break;

		case 4:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segb_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segf_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segg_GPIO_Port, sega_Pin, RESET);
			break;

		case 5:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segc_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segf_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segg_GPIO_Port, sega_Pin, RESET);
			break;

		case 6:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segc_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segf_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segg_GPIO_Port, sega_Pin, RESET);
			break;

		case 7:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segf_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segg_GPIO_Port, sega_Pin, SET);
			break;

		case 8:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segf_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segg_GPIO_Port, sega_Pin, RESET);
			break;

		case 9:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segb_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segc_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segd_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segf_GPIO_Port, sega_Pin, RESET);
			HAL_GPIO_WritePin(segg_GPIO_Port, sega_Pin, RESET);
			break;

		default:
			HAL_GPIO_WritePin(sega_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segb_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segc_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segd_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(sege_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segf_GPIO_Port, sega_Pin, SET);
			HAL_GPIO_WritePin(segg_GPIO_Port, sega_Pin, SET);
			break;
	}
}


void display_7seg_a(){
	switch(timer_7seg){
		case 0:
			HAL_GPIO_WritePin(sega_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segb_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segc_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segd_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(sege_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segf_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segg_a_GPIO_Port, sega_a_Pin, SET);
			break;

		case 1:
			HAL_GPIO_WritePin(sega_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segb_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segc_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segd_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(sege_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segf_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segg_a_GPIO_Port, sega_a_Pin, SET);
			break;

		case 2:
			HAL_GPIO_WritePin(sega_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segb_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segc_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segd_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(sege_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segf_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segg_a_GPIO_Port, sega_a_Pin, RESET);
			break;

		case 3:
			HAL_GPIO_WritePin(sega_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segb_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segc_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segd_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(sege_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segf_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segg_a_GPIO_Port, sega_a_Pin, SET);
			break;

		case 4:
			HAL_GPIO_WritePin(sega_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segb_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segc_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segd_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(sege_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segf_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segg_a_GPIO_Port, sega_a_Pin, RESET);
			break;

		case 5:
			HAL_GPIO_WritePin(sega_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segb_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segc_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segd_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(sege_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segf_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segg_a_GPIO_Port, sega_a_Pin, RESET);
			break;

		case 6:
			HAL_GPIO_WritePin(sega_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segb_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segc_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segd_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(sege_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segf_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segg_a_GPIO_Port, sega_a_Pin, RESET);
			break;

		case 7:
			HAL_GPIO_WritePin(sega_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segb_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segc_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segd_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(sege_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segf_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segg_a_GPIO_Port, sega_a_Pin, SET);
			break;

		case 8:
			HAL_GPIO_WritePin(sega_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segb_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segc_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segd_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(sege_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segf_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segg_a_GPIO_Port, sega_a_Pin, RESET);
			break;

		case 9:
			HAL_GPIO_WritePin(sega_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segb_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segc_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segd_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(sege_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segf_a_GPIO_Port, sega_a_Pin, RESET);
			HAL_GPIO_WritePin(segg_a_GPIO_Port, sega_a_Pin, RESET);
			break;

		default:
			HAL_GPIO_WritePin(sega_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segb_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segc_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segd_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(sege_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segf_a_GPIO_Port, sega_a_Pin, SET);
			HAL_GPIO_WritePin(segg_a_GPIO_Port, sega_a_Pin, SET);
			break;
	}
}
