/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RED_A_Pin GPIO_PIN_1
#define LED_RED_A_GPIO_Port GPIOA
#define LED_YELLOW_A_Pin GPIO_PIN_2
#define LED_YELLOW_A_GPIO_Port GPIOA
#define LED_GREEN_A_Pin GPIO_PIN_3
#define LED_GREEN_A_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_6
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_7
#define LED_GREEN_GPIO_Port GPIOA
#define sega_Pin GPIO_PIN_0
#define sega_GPIO_Port GPIOB
#define segb_Pin GPIO_PIN_1
#define segb_GPIO_Port GPIOB
#define segc_Pin GPIO_PIN_2
#define segc_GPIO_Port GPIOB
#define EN2_Pin GPIO_PIN_10
#define EN2_GPIO_Port GPIOB
#define EN3_Pin GPIO_PIN_11
#define EN3_GPIO_Port GPIOB
#define BUTTON_1_Pin GPIO_PIN_11
#define BUTTON_1_GPIO_Port GPIOA
#define BUTTON_2_Pin GPIO_PIN_12
#define BUTTON_2_GPIO_Port GPIOA
#define BUTTON_3_Pin GPIO_PIN_13
#define BUTTON_3_GPIO_Port GPIOA
#define segd_Pin GPIO_PIN_3
#define segd_GPIO_Port GPIOB
#define sege_Pin GPIO_PIN_4
#define sege_GPIO_Port GPIOB
#define segf_Pin GPIO_PIN_5
#define segf_GPIO_Port GPIOB
#define segg_Pin GPIO_PIN_6
#define segg_GPIO_Port GPIOB
#define EN0_Pin GPIO_PIN_8
#define EN0_GPIO_Port GPIOB
#define EN1_Pin GPIO_PIN_9
#define EN1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
