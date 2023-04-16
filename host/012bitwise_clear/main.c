/*
 * main.c
 *
 *  Created on: 26 Şub 2023
 *      Author: ahmet
 */


#include <stdio.h>
#include <stdint.h>
void wait();
int main(void){
	int32_t n1=0,clear=0xC7,result=0;
	printf("Enter a number to clear = ");
	scanf("%d",&n1);
	result=n1&clear;
	printf("This is the result number = %x",result);
	wait();
	return 0;
}
void wait(){
	printf("\nPlease enter a key to kill the program");
	while(getchar()!='\n'){

	}
	getchar();
}
