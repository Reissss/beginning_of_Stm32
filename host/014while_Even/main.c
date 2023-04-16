/*
 * main.c
 *
 *  Created on: 2 Mar 2023
 *      Author: ahmet
 */

#include <stdio.h>
#include <stdint.h>
void wait();
int main(void){
	int32_t n1=0,n2=0,check=0x00000001;
	printf("Enter 2 number to search the even number of the between from them = ");
	scanf("%d %d",&n1,&n2);
	printf("\n");
	while(n1<=n2){
		(n1&check==1)?printf(""):printf("%d ",n1);
		n1++;
	}
	wait();
	return 0;
}
void wait(){
	printf("\nPlease enter a key to kill the program");
	while(getchar()!='\n'){

	}
	getchar();
}
