#include "stm32f1xx_hal.h"

extern TIM_HandleTypeDef htim1;
void start(void)
{
    HAL_TIM_OC_Start(&htim1, TIM_CHANNEL_1);
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);

    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET);

    while (1)
    {
        HAL_Delay(500);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, RESET);
        HAL_Delay(500);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, SET);
    }
}
