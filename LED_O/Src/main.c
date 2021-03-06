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


	uint32_t *pClkCtrlReg =   (uint32_t*)0x40023830;
	uint32_t *pPortBModeReg = (uint32_t*)0x40020400;
	uint32_t *pPortBOutReg =  (uint32_t*)0x40020414;


	//enable the clock for GPOIB peripheral in the AHB1ENR
	*pClkCtrlReg |= 0x00000002; //B

	//2. configure the mode of the IO pin as output

	//a. clear the 14th and 15th bit positions (CLEAR)
	// *pPortBModeReg &= 0xFFFFCFFF;
	*pPortBModeReg &= 0xFFFF3FFF; //correct
	

	//b. make 14th bit position as 1 (SET)
	*pPortBModeReg |= 0x00004000;

	//turn on the LED
	*pPortBOutReg |= 0x0080;


    /* Loop forever */
	for(;;);
}
