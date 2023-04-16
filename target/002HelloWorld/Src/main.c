/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include<stdio.h>
#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	printf("Hello World\n");
	printf("The size of char type is = %d\n",sizeof(char));
	printf("The size of int type is = %d\n",sizeof(int));
	printf("The size of long type is = %d\n",sizeof(long));
	printf("The size of long long type is = %d\n",sizeof(long long));
	printf("The size of double type is = %d\n",sizeof(double));
	printf("The size of float type is = %d\n",sizeof(float));
    /* Loop forever */
	for(;;);
}
