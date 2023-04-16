/*
 * main.c
 *
 *  Created on: 14 Mar 2023
 *      Author: ahmet
 */

#include <stdio.h>
#include <stdint.h>
void wait();
void swap_Arrays(uint8_t *st_Array,uint8_t *nd_Array,uint8_t length);
int main(void){
	uint8_t array1[2],array2[2],written=0;
	for(uint32_t i=0;i<2;i++){
		printf("\nEnter a number for first array");
		scanf("%x",&written);
		*(array1+i)=written;
		printf("\nEnter a number for second array");
		scanf("%x",&written);
		*(array2+i)=written;
	}
	printf("\n First array' elements = %x     %x ",*(array1),*(array1+1));
	swap_Arrays(array1,array2,2);
	wait();
	return 0;
}
void swap_Arrays(uint8_t *st_Array,uint8_t *nd_Array,uint8_t length){
	uint8_t memory=0;
	for(uint32_t i=0;i<length;i++){
		memory=*(st_Array+i);
		*(st_Array+i)=*(nd_Array+i);
		*(nd_Array+i)=memory;
		printf("\nFirst array's %d member = %x  and second array's %d member"
				" = %x",i+1,*(st_Array+i),i+1,*(nd_Array+i));
	}
}
void wait(){
	printf("\nPlease enter a key to kill the program");
	while(getchar()!='\n'){

	}
	getchar();
}
