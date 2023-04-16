/*
 * main.c
 *
 *  Created on: 20 Şub 2023
 *      Author: ahmet
 */

#include <stdio.h>
void wait();
int main(void){
	short n1=0,n2=0,n3=0;
	float result=0.0;
	printf("Enter the first number = ");
	fflush(stdout);
	scanf("%hi",&n1);
	printf("\nEnter the second number = ");
	fflush(stdout);
	scanf("%hi",&n2);
	printf("\nEnter the third number = ");
	fflush(stdout);
	scanf("%hi",&n3);
	result=(n1+n2+n3)/3.0;
	printf("\nThe result is = %f\n",result);
	wait();
	return 0;
}
void wait(){
	printf("Enter a key to exit from the application \n");
	getchar();
	getchar();
}
