/*
 * main.c
 *
 *  Created on: 1 Mar 2023
 *      Author: ahmet
 */


#include <stdio.h>
#include <stdint.h>
void wait();
int main(void){
	int16_t n1=0,result=0;
	printf("Enter a number to clear = ");
	scanf("%hi",&n1);
	result=n1&(63<<9); // (int8_t) ((n1>>9)&0x003F)
	printf("This is the result number = %d",result);
	wait();
	return 0;
}
void wait(){
	printf("\nPlease enter a key to kill the program");
	while(getchar()!='\n'){

	}
	getchar();
}
