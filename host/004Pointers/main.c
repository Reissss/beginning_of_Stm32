/*
 * main.c
 *
 *  Created on: 23 Şub 2023
 *      Author: ahmet
 */

#include <stdio.h>
void wait();
int main(void){
	char n1=100;
	printf("The adress of the n1 variable is = %p\n",&n1);
	char* p1= &n1;
	printf("The data of n1 is = %d\n",*p1);
	*p1=65;
	printf("The changed data of n1 is =%d\n ",n1);
	wait();
	return 0;
}
void wait(){
	while(getchar()!='\n'){

	}
	getchar();
}
