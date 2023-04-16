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
	int32_t n1=0,check=1,tester=0;
	printf("Enter a number to find out that is a even number or a odd number = ");
	fflush(stdout);
	scanf("%d",&n1);
	tester=n1&check;
	(tester!=1)?printf("\n%d is even number.",n1):printf("\n%d is odd number.",n1);
	fflush(stdout);
	wait();
	return 0;
}
void wait(){
	printf("\nPlease enter a key to kill the program");
	while(getchar()!='\n'){

	}
	getchar();
}
