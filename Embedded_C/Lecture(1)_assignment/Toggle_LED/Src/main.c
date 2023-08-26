/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
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




typedef volatile unsigned int   vuint32_t;

#define RCC_Base   0x40021000
#define GPIOPA_Base   0x40010800

#define RCC_APB2ENR    *(vuint32_t*)(RCC_Base+0x18)
#define GPIO_PA_CRH    *(vuint32_t*)(GPIOPA_Base+0x04)
#define GPIO_PA_ODR    *(vuint32_t*)(GPIOPA_Base+0x0c)

#define SetClock   (1<<2)

int main(void)
{

	RCC_APB2ENR|=SetClock;
	GPIO_PA_CRH &= 0xff0fffff;
	GPIO_PA_CRH|=  0x00200000;
	while(1){
		GPIO_PA_ODR|=(1<<13);
		for(int i=0 ;i<0000;i++);
		GPIO_PA_ODR&=~(1<<13);
		for(int i=0 ;i<50000;i++);
	}

}
