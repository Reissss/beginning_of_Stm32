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
	struct Dataset data,*ptr;
	data.data1=0x11;
	data.data2=0xFFFFEEEE;
	data.data3=0x22;
	data.data4=0xABCD;
	ptr=&data;
	ptr->data1=0x55;
	printf("Value of dataset = %X",data.data1);

	wait();
	return 0;
}
void wait(){
	printf("\nPlease enter a key to kill the program");
	while(getchar()!='\n'){

	}
	getchar();
}
