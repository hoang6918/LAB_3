/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

#include"button.h"
#include"7seg.h"
#include"fsm_automatic1.h"
#include"fsm_automatic2.h"
#include"updateled.h"
#include"global.h"
#include"timer.h"
#include"timer2.h"
#include"timer3.h"
#include"toggle_red.h"
#include"quetled.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
TIM_HandleTypeDef htim2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM2_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM2_Init();
  /* USER CODE BEGIN 2 */
  HAL_TIM_Base_Start_IT (& htim2 ) ;
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

  global_red = 5;
  global_green = 3;
  global_yellow = 2;

  global_red1 = 5;
  global_green1 = 3;
  global_yellow1 = 2;

  count11 = 3;
  count22 = 5;

  x = 0;
  y = 0;

  int count_red = 0;
  int count_green = 0;
  int count_yellow = 0;
  status = INIT;
  status1 = INIT;
  setTimer2(10);
  int count = 0;
   while (1)
   {
	   getKeyInput1();
	   if(button_flag1 == 1)
	  	   {
	  		   count = count +1;
	  		   count_red = 1;
	  		   count_yellow = 1;
	  		   count_green = 1;
	  		   button_flag1=0;
	  	   }
	   switch(count)
	   {

	   case 0:
		   fsm_automatic_run2(global_green1, global_red1, global_yellow1);
		   fsm_automatic_run1(global_green1, global_red1, global_yellow1);
		   updateled();
		   break;
	   case 1:
		   getKeyInput2();
		   getKeyInput3();
		   if(count_red == 1)
		   {
	              toggle1(1);
	              scanled(global_red, 2);
		   }
	       if(button_flag2 == 1)
		  		  	   {
	    	              count_red = 1;
		  		  		  global_red = global_red +1;
		  		  		  button_flag2=0;
		  		  	   }
	       if(button_flag3 == 1)
	       		  	   {
	       		  		  button_flag3=0;
	       		  		  count_red = 0;
	       		  	   }
	       if(global_red == 100)
	       {
	    	   global_red = 0;
	       }
	       if(count_red == 0)
	       {
			   global_red1 = global_red;
	       }
			count11 = 0;
			count22 = 0;
	       break;

	   case 2:
		   getKeyInput2();
		   getKeyInput3();
		   if(count_yellow == 1)
		   {
		  	    toggle1(2);
		  	    scanled(global_yellow, 3);
		   }
		   if(button_flag2 == 1)
		   {
		  	    count_yellow = 1;
		  		global_yellow = global_yellow +1;
		  		button_flag2=0;
		   }
		   if(button_flag3 == 1)
		   {
		  	     button_flag3=0;
		  	     count_yellow = 0;
		   }
		   if(global_yellow == 100)
		   {
		  	     global_yellow = 0;
		   }
		   if(count_yellow == 0)
		   {
			   global_yellow1 = global_yellow;
		   }
			count11 = 0;
			count22 = 0;
	       break;
	   case 3:
	   		   getKeyInput2();
	   		   getKeyInput3();
	   		   if(count_green == 1)
	   		   {
	   		  	    toggle1(3);
	   		  	    scanled(global_green, 4);
	   		   }
	   		   if(button_flag2 == 1)
	   		   {
	   		  	    count_green = 1;
	   		  		global_green = global_green +1;
	   		  		button_flag2=0;
	   		   }
	   		   if(button_flag3 == 1)
	   		   {
	   		  	     button_flag3=0;
	   		  	     count_green = 0;
	   		   }
	   		   if(global_green == 100)
	   		   {
	   		  	     global_green = 0;
	   		   }
	   		   if(count_green == 0)
	   		   {
				   global_green1 = global_green;
	   		   }
				count11 = 0;
				count22 = 0;
	   	       break;
	   case 4:
			status = INIT;
			status1 = INIT;

			count11 = global_green1;
			count22 = global_red1;

			x= 0;
			y = 0;
			count = 0;
		   break;
	   default:
	       break;
	   }

   }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 7999;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 10;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED_1_Pin|LED_RED_2_Pin|LED_GREEN_1_Pin|LED_GREEN_2_Pin
                          |LED_YELLOW_1_Pin|LED_YELLOW_2_Pin|EN0_Pin|EN1_Pin
                          |EN2_Pin|EN3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, A_Pin|B_Pin|C_Pin|D1_Pin
                          |E1_Pin|F1_Pin|G1_Pin|D_Pin
                          |E_Pin|F_Pin|G_Pin|A1_Pin
                          |B1_Pin|C1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED_1_Pin LED_RED_2_Pin LED_GREEN_1_Pin LED_GREEN_2_Pin
                           LED_YELLOW_1_Pin LED_YELLOW_2_Pin EN0_Pin EN1_Pin
                           EN2_Pin EN3_Pin */
  GPIO_InitStruct.Pin = LED_RED_1_Pin|LED_RED_2_Pin|LED_GREEN_1_Pin|LED_GREEN_2_Pin
                          |LED_YELLOW_1_Pin|LED_YELLOW_2_Pin|EN0_Pin|EN1_Pin
                          |EN2_Pin|EN3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : A_Pin B_Pin C_Pin D1_Pin
                           E1_Pin F1_Pin G1_Pin D_Pin
                           E_Pin F_Pin G_Pin A1_Pin
                           B1_Pin C1_Pin */
  GPIO_InitStruct.Pin = A_Pin|B_Pin|C_Pin|D1_Pin
                          |E1_Pin|F1_Pin|G1_Pin|D_Pin
                          |E_Pin|F_Pin|G_Pin|A1_Pin
                          |B1_Pin|C1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : BUTTON1_Pin BUTTON2_Pin BUTTON3_Pin */
  GPIO_InitStruct.Pin = BUTTON1_Pin|BUTTON2_Pin|BUTTON3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
	timer_run();
	timer_run2();
	timer_run3();
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
