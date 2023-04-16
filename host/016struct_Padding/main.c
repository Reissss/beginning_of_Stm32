/*
 * main.c
 *
 *  Created on: 11 Mar 2023
 *      Author: ahmet
 */

#include <stdio.h>
#include <stdint.h>
void wait();
struct Dataset{
	char data1;
	int data2;
	char data3;
	short data4;
};


/*typedef struct{
	char data1;        Option of definition of struct structure
}DataSet_t;
DataSet_t bmw_Dataset;*/


int main(void){
	struct Dataset data;
	data.data1=0x11;
	data.data2=0xFFFFEEEE;
	data.data3=0x22;
	data.data4=0xABCD;
	int sizeof_Dataset=sizeof(struct Dataset);
	uint8_t *ptr;
	ptr=(uint8_t*)&data;
	for(int i=0;i<sizeof_Dataset;i++){
		printf("%p          %X\n",ptr,*ptr);
		ptr++;
	}
	printf("\n Size of dataset = %d",sizeof_Dataset);

	wait();
	return 0;
}
void wait(){
	printf("\nPlease enter a key to kill the program");
	while(getchar()!='\n'){

	}
	getchar();
}
