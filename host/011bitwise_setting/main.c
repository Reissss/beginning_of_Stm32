/*
 * main.c
 *
 *  Created on: 26 Şub 2023
 *      Author: ahmet
 */
//We did the project for testing bits
#include <stdio.h>
#include <stdint.h>
void wait();
int main(void){
	int32_t n1=0,set=72,result=0;
	printf("Enter a number to add 72 = ");
	scanf("%d",&n1);
	result=n1|set;
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
