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
	uint8_t age=0;
	printf("Enter a age = ");
	scanf("%d",&age);
	(age<18)?printf("\nYou are not eligeble to use your vote"):printf("\nYou are eligible to use your vote");
	wait();
	return 0;
}
void wait(){
	printf("\nEnter a key to kill the program.");
	while(getchar()!='\n'){

	}
	getchar();
}
