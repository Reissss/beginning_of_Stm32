/*
 * main.c
 *
 *  Created on: 21 Şub 2023
 *      Author: ahmet
 */
#include <stdio.h>
void wait();
int main(void){
	char ch1,ch2,ch3,ch4,ch5,ch6;
	printf("Please enter 6 characters = ");
	scanf("%c %c %c %c %c %c",&ch1,&ch2,&ch3,&ch4,&ch5,&ch6);
	printf("\n The 1st char = %c = %d \n The 2nd char = %c = %d \n The 3rd char = %c = %d "
			"\n The 4th char = %c = %d \n The 5th char = %c = %d \n The 6th char = %c = %d "
			,ch1,ch1,ch2,ch2,ch3,ch3,ch4,ch4,ch5,ch5,ch6,ch6);
	wait();
	return 0;
}

void wait(){
	printf("\nEnter a key to exit from the application \n");
	while(getchar()!='\n'){

	}
	getchar();
}
