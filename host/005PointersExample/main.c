/*
 * main.c
 *
 *  Created on: 23 Şub 2023
 *      Author: ahmet
 */


#include <stdio.h>

long long int g_data=0xFFFEABCD11112345;

int main(void){

	char* p1;
	p1=(char*)&g_data;
	printf("The value of adress %p and value of data are = %x\n",p1,*p1);


	short* p2;
	p2=(short*)&g_data;
	printf("The value of adress %p and value of data are = %x\n",p2,*p2);

	int* p3;
	p3=(int*)&g_data;
	printf("The value of adress %p and value of data are = %x\n",p3,*p3);

	long long int* p4;
	p4=(long long int*)&g_data;
	printf("The value of adress %p and value of data are = %I64x\n",p4,*p4);
	printf("Size of long long = %d and int = %d",sizeof(long long),sizeof(int));

	return 0;
}
