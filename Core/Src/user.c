/*
 * user.c
 *
 *  Created on: Sep 16, 2023
 *      Author: anup
 */
#include "main.h"
#include "string.h"
#include "stdio.h"
#include "user.h"

extern ADC_HandleTypeDef hadc1;
extern I2C_HandleTypeDef hi2c2;
extern SPI_HandleTypeDef hspi1;
extern SPI_HandleTypeDef hspi2;
extern UART_HandleTypeDef huart1;
extern TIM_HandleTypeDef htim2;
void setup() {
	HAL_TIM_Base_Start_IT(&htim2);
}

void loop() {

}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
}
