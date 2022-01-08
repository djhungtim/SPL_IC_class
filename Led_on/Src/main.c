/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
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

#include <stdint.h>

//#if !defined(__SOFT_FP__) && defined(__ARM_FP)
//  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
//#endif

int main(void)
{

	uint32_t volatile *const pClkCtrlReg =   (uint32_t*)0x40023830;
	uint32_t volatile *const pPortBModeReg = (uint32_t*)0x40020400;
	uint32_t volatile *const pPortBOutReg =  (uint32_t*)0x40020414;

	uint32_t volatile *const pPortGModeReg = (uint32_t*)0x40021800;
	uint32_t const volatile *const pPortGInReg =   (uint32_t*)0x40021810;

	//enable the clock for GPOIB , GPIOG peripherals in the AHB1ENR
	*pClkCtrlReg |= ( 1 << 1); //B
	*pClkCtrlReg |= ( 1 << 6); //G



	//2. configure the mode of the IO pin as output
	//a. clear the 14th and 15th bit positions (CLEAR)
	*pPortBModeReg &= ~( 3 << 14 );

	//b. make 14th bit position as 1 (SET)
	*pPortBModeReg |= ( 1 << 14 );

	//Configure PG0 as input mode (GPIOG MODE REGISTER)
	*pPortGModeReg &= ~(3 << 0);


	while(1)
	{
		//read the pin status of the pin PG0 (GPIOG INPUT DATA REGISTER)
		uint8_t pinStatus = (uint8_t)(*pPortGInReg & 0x1); //zero out all other bits except bit 0

		if(pinStatus){
			//turn on the LED
			*pPortBOutReg |= ( 1 << 7 );
		}else{
			//turn off the LED
			*pPortBOutReg &= ~( 1 << 7);
		}
	}


}
