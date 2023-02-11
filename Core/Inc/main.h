/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
enum DAQStateTypes {
	initialization,
	collectdata,
	save_to_sd,
	send_subseerial
};
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
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define HALL_1_Pin GPIO_PIN_0
#define HALL_1_GPIO_Port GPIOC
#define HALL_2_Pin GPIO_PIN_1
#define HALL_2_GPIO_Port GPIOC
#define HALL_3_Pin GPIO_PIN_2
#define HALL_3_GPIO_Port GPIOC
#define HALL_4_Pin GPIO_PIN_3
#define HALL_4_GPIO_Port GPIOC
#define HALL_5_Pin GPIO_PIN_0
#define HALL_5_GPIO_Port GPIOA
#define HALL_6_Pin GPIO_PIN_1
#define HALL_6_GPIO_Port GPIOA
#define BNO_INT_Pin GPIO_PIN_4
#define BNO_INT_GPIO_Port GPIOC
#define BNO_RST_Pin GPIO_PIN_5
#define BNO_RST_GPIO_Port GPIOC
#define SD_CS_Pin GPIO_PIN_1
#define SD_CS_GPIO_Port GPIOB
#define SD_DET_Pin GPIO_PIN_2
#define SD_DET_GPIO_Port GPIOB
#define SCL_5V_BUS_Pin GPIO_PIN_10
#define SCL_5V_BUS_GPIO_Port GPIOB
#define SDA_5V_BUS_Pin GPIO_PIN_11
#define SDA_5V_BUS_GPIO_Port GPIOB
#define SD_SPI_SCK_Pin GPIO_PIN_13
#define SD_SPI_SCK_GPIO_Port GPIOB
#define SD_SPI_MISO_Pin GPIO_PIN_14
#define SD_SPI_MISO_GPIO_Port GPIOB
#define SD_SPI_MOSI_Pin GPIO_PIN_15
#define SD_SPI_MOSI_GPIO_Port GPIOB
#define SPI_CS_OPT_Pin GPIO_PIN_7
#define SPI_CS_OPT_GPIO_Port GPIOC
#define BMS_TX_Pin GPIO_PIN_9
#define BMS_TX_GPIO_Port GPIOA
#define BMS_RX_Pin GPIO_PIN_10
#define BMS_RX_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SUBSEERIAL_TX_Pin GPIO_PIN_10
#define SUBSEERIAL_TX_GPIO_Port GPIOC
#define SUBSEERIAL_RX_Pin GPIO_PIN_11
#define SUBSEERIAL_RX_GPIO_Port GPIOC
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define SCL_3V_BUS_SPI_CS_OPT_Pin GPIO_PIN_6
#define SCL_3V_BUS_SPI_CS_OPT_GPIO_Port GPIOB
#define SDA_3V_BUS_Pin GPIO_PIN_7
#define SDA_3V_BUS_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
