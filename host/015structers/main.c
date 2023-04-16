/*
 * main.c
 *
 *  Created on: 11 Mar 2023
 *      Author: ahmet
 */

#include <stdio.h>
#include <stdint.h>
void wait();
struct carModel{
	uint32_t carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};
int main(void){
	struct carModel carBMW={.carNumber=2021,.carPrice=15000,.carMaxSpeed=220,.carWeight=1330};
	struct carModel carFiat={4031,35000,160,1900.96};
	printf("Features of BMW = number(%d)  price(%d)   maxSpeed(%d)  weight(%f)",carBMW.carNumber
			,carBMW.carPrice,carBMW.carMaxSpeed,carBMW.carWeight);
	printf("\nFeatures of Fiat = number(%d)  price(%d)   maxSpeed(%d)  weight(%0.2f)",carFiat.carNumber
				,carFiat.carPrice,carFiat.carMaxSpeed,carFiat.carWeight);
	printf("\nSizeof of the struct = %d",sizeof(struct carModel));
	wait();
	return 0;
}
void wait(){
	printf("\nPlease enter a key to kill the program");
	while(getchar()!='\n'){

	}
	getchar();
}
