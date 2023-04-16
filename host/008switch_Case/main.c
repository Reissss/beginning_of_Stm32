/*
 * main.c
 *
 *  Created on: 25 Şub 2023
 *      Author: ahmet
 */


#include <stdio.h>
#include <stdint.h>

void wait();
int main(void){
	uint8_t preference='a';
	float result=0.1,pi=3.1415;
	float lngth0=0.1,lngth1=0.1,lngth2=0.1;
	printf("Area calculation program \n");
	printf("Circle ----> c\n");
	printf("Triangle ----> t\n");
	printf("Square ----> s\n");
	printf("Rectangle ----> r\n");
	printf("Trapezoid ----> z\n");
	printf("Enter the code here: ");
	scanf("%c",&preference);
	if(preference!='c'&&preference!='t'&&preference!='s'&&preference!='r'&&preference!='z'){
		printf("Please the enter code which are mentioned");
		wait();
		return 0;
	}
	switch (preference){
	case't':
		printf("\nEnter the height = ");
		scanf("%f",&lngth0);
		printf("\n And enter the base = ");
		scanf("%f",&lngth1);
		result=lngth0*lngth1/2;
		printf("\nThe result is = %f",result);
		break;
	case'z':
		printf("\nEnter the height = ");
		scanf("%f",&lngth0);
		printf("\n And enter first length = ");
		scanf("%f",&lngth1);
		printf("\n And enter second length = ");
		scanf("%f",&lngth2);
		result=(lngth1+lngth2)*lngth0/2;
		printf("\nThe result is = %f",result);
		break;
	case's':
		printf("\nEnter the length = ");
		scanf("%f",&lngth0);
		result=lngth0*lngth0;
		printf("\nThe result is = %f",result);
		break;
	case'r':
		printf("\nEnter the first length = ");
		scanf("%f",&lngth0);
		printf("\n And enter the second length = ");
		scanf("%f",&lngth1);
		result=lngth0*lngth1;
		printf("\nThe result is = %f",result);
		break;
	case'c':
		printf("\nEnter the radius = ");
		scanf("%f",&lngth0);
		result=lngth0*lngth0*pi;
		printf("\nThe result is = %f",result);
		break;
	default:
		printf("\nInvalid number ");
	}
	wait();
	return 0 ;
}
void wait(){
	printf("\nPlease enter a key to kill the program.");
	while(getchar()!='\n'){

	}
	getchar();
}
