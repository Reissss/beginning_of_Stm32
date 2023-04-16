/*
 * main.c
 *
 *  Created on: Mar 11, 2023
 *      Author: ahmet
 */


#include <stdio.h>
#include <stdint.h>



typedef struct{
	int8_t crc;
	int8_t status;
	int16_t payload;
	int8_t bat;
	int8_t sensor;
	int16_t long_Addr;
	int8_t short_Addr;
	int8_t addr_Mode;
}Packet_t;
void wait();
void decoder(int32_t* pcode,Packet_t *pPacket);

int main(void){
	int32_t the_Code=0;
	Packet_t the_Decode;
	printf("Please enter the code to decrypting the code = ");
	scanf("%X",&the_Code);
	printf("\n");
	decoder(&the_Code,&the_Decode);
	printf("addr_Mode = %#X",the_Decode.addr_Mode);
	printf("\nshort_Addr = %#X",the_Decode.short_Addr);
	printf("\nlong_Addr = %#X ",the_Decode.long_Addr);
	printf("\nsensor = %#X",the_Decode.sensor);
	printf("\nbat = %#X",the_Decode.bat);
	printf("\npayload = %#X",the_Decode.payload);
	printf("\nstatus = %#X",the_Decode.status);
	printf("\ncrc = %#X",the_Decode.crc);
	printf("\n Size of structure = %d",sizeof(the_Decode));
	wait();
	return 0;
}

void decoder(int32_t* pcode,Packet_t *pPacket){
	pPacket->addr_Mode=(int8_t)((*pcode>>31)&0x1);
	pPacket->short_Addr=(int8_t)((*pcode>>29)&0x3);
	pPacket->long_Addr=(int16_t)((*pcode>>21)&0xFF);
	pPacket->sensor=(int8_t)((*pcode>>18)&0x7);
	pPacket->bat=(int8_t)((*pcode>>15)&0x7);
	pPacket->payload=(int16_t)((*pcode>>3)&0xfff);
	pPacket->status=(int8_t)((*pcode>>2)&0x1);
	pPacket->crc=(int8_t)(*pcode&0x3);
}

void wait(){

	printf("\nPress enter to kill the program.");
	while(getchar()!='\n'){

	}
	getchar();
}
