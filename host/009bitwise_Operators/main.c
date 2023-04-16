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
	int32_t n1=0,n2=0;
	int32_t bitwise_and=0,bitwise_or=0,bitwise_xor=0,bitwise_not=0,bitwise_not1=0;
	printf("Enter a two integers = ");
	scanf("%d %d",&n1,&n2);
	bitwise_and=n1&n2;
	bitwise_or=n1|n2;
	bitwise_xor=n1^n2;
	bitwise_not=~n1;
	bitwise_not1=~n2;
	printf("\nBitwise and = %d",bitwise_and);
	printf("\nBitwise or = %d",bitwise_or);
	printf("\nBitwise xor = %d",bitwise_xor);
	printf("\nBitwise not for n1 = %d",bitwise_not);
	printf("\nBitwise not for n2 = %d",bitwise_not1);
	wait();
	return 0;
}
void wait(){
	printf("Please enter a key to kill the program");
	while(getchar()!='\n'){

	}
	getchar();
}
