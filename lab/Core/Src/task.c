/*
 * task.c
 *
 *  Created on: Dec 8, 2022
 *      Author: pc
 */

#include "task.h"
#include "global.h"
#include "main.h"

//void SetRed(void){
//	//HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
//	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
//}
//
//void SetGreen(void){
//	//HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
//	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
//}
//void SetYellow(void){
//	//HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
//	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
//}

//char str[50];
//void Print_Timestamps(){
//	  HAL_UART_Transmit(&huart2, str, sprintf(str, "%s : %d \r\n","Timestamp", counter_timestamps), 1000);
//}
//
//void Toggle_LedRed(){
//	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
//	HAL_UART_Transmit(&huart2, str, sprintf(str, "%s : %d \r\n","LedRed - Timestamp:", counter_timestamps), 1000);
//}
//
//void Toggle_LedGreen(){
//	HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
//	HAL_UART_Transmit(&huart2, str, sprintf(str, "%s : %d \r\n","LedGreen - Timestamp:", counter_timestamps), 1000);
//}
//void Toggle_LedYellow(){
//	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
//	HAL_UART_Transmit(&huart2, str, sprintf(str, "%s : %d \r\n","LedYellow - Timestamp:", counter_timestamps), 1000);
//}
//void Toggle_LedBlue(){
//	HAL_GPIO_TogglePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin);
//	HAL_UART_Transmit(&huart2, str, sprintf(str, "%s : %d \r\n","LedBlue - Timestamp:", counter_timestamps), 1000);
//}
//void Toggle_LedPink(){
//	HAL_GPIO_TogglePin(LED_PINK_GPIO_Port, LED_PINK_Pin);
//	HAL_UART_Transmit(&huart2, str, sprintf(str, "%s : %d \r\n","LedPink - Timestamp:", counter_timestamps), 1000);
//}
