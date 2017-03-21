#include "stm32f4xx.h"
#include "led.h"

void LED_Init(void)
{
    GPIO_InitTypeDef LED;
    RCC_AHB1PeriphClockCmd (RCC_AHB1Periph_GPIOF, ENABLE);
    
    LED.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_10;
    LED.GPIO_Mode = GPIO_Mode_OUT;
    LED.GPIO_OType = GPIO_OType_PP;
    LED.GPIO_PuPd = GPIO_PuPd_UP;
    LED.GPIO_Speed = GPIO_Speed_50MHz;
    
    GPIO_Init (GPIOF, &LED);
    
    OFF (GPIOF,GPIO_Pin_9 | GPIO_Pin_10);
}
