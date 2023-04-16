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
	printf("Please enter the age for evaluate permission of vote = ");
	scanf("%d",&age);
	if (age >= 18) printf("\nCongrulations, you can use your vote.");
	else printf("\nYou have to wait for vote until you get 18 age.");
	wait();
	return 0 ;
}
void wait(){
	while(getchar()!='\n'){

	}
	getchar();
}
