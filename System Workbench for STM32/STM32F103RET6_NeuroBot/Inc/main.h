/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2018 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define Bluetooth_RESET_Pin GPIO_PIN_13
#define Bluetooth_RESET_GPIO_Port GPIOC
#define LED_Training_Pin GPIO_PIN_14
#define LED_Training_GPIO_Port GPIOC
#define LED_Run_Pin GPIO_PIN_15
#define LED_Run_GPIO_Port GPIOC
#define Bluetooth_PWR_Pin GPIO_PIN_3
#define Bluetooth_PWR_GPIO_Port GPIOC
#define POWER_ON_MAIN_Pin GPIO_PIN_0
#define POWER_ON_MAIN_GPIO_Port GPIOA
#define MOSFET_Enable_Pin GPIO_PIN_1
#define MOSFET_Enable_GPIO_Port GPIOA
#define Bluetooth_Enable_Pin GPIO_PIN_4
#define Bluetooth_Enable_GPIO_Port GPIOA
#define OLED_RESET_Pin GPIO_PIN_4
#define OLED_RESET_GPIO_Port GPIOC
#define OLED_DC_Pin GPIO_PIN_5
#define OLED_DC_GPIO_Port GPIOC
#define OLED_CS_Pin GPIO_PIN_0
#define OLED_CS_GPIO_Port GPIOB
#define BATTERY_SENSE_Pin GPIO_PIN_1
#define BATTERY_SENSE_GPIO_Port GPIOB
#define ToF_Enable_Pin GPIO_PIN_2
#define ToF_Enable_GPIO_Port GPIOB
#define BUTTON_DOWN_Pin GPIO_PIN_12
#define BUTTON_DOWN_GPIO_Port GPIOB
#define BUTTON_OK_Pin GPIO_PIN_13
#define BUTTON_OK_GPIO_Port GPIOB
#define BUTTON_UP_Pin GPIO_PIN_14
#define BUTTON_UP_GPIO_Port GPIOB
#define Battery_Full_Pin GPIO_PIN_8
#define Battery_Full_GPIO_Port GPIOA
#define Battery_Charging_Pin GPIO_PIN_9
#define Battery_Charging_GPIO_Port GPIOA
#define USB_Enable_Pin GPIO_PIN_10
#define USB_Enable_GPIO_Port GPIOA
#define SD_DETECTION_Pin GPIO_PIN_15
#define SD_DETECTION_GPIO_Port GPIOA
#define Motor_nFault_Pin GPIO_PIN_4
#define Motor_nFault_GPIO_Port GPIOB
#define Motor_Enable_Pin GPIO_PIN_5
#define Motor_Enable_GPIO_Port GPIOB
#define Motor_B2_Pin GPIO_PIN_6
#define Motor_B2_GPIO_Port GPIOB
#define Motor_B1_Pin GPIO_PIN_7
#define Motor_B1_GPIO_Port GPIOB
#define Motor_A2_Pin GPIO_PIN_8
#define Motor_A2_GPIO_Port GPIOB
#define Motor_A1_Pin GPIO_PIN_9
#define Motor_A1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
