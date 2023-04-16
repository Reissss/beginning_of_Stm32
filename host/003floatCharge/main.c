/*
 * main.c
 *
 *  Created on: 21 Şub 2023
 *      Author: ahmet
 */


#include <stdio.h>

void wait();
int main(void){
	double given_Charge=0.1,charge_ofE=1.60217663e-19,number_ofE=0.1;
	printf("Write the given charge = ");
	scanf("%lf",&given_Charge);
	number_ofE=given_Charge/charge_ofE;
	printf("\nThe number of electrons is = %0.0lf",number_ofE);
	printf("\nThe number of electrons is = %le",number_ofE);
	wait();
	return 0;
}
void wait(){
	printf("\nPlease enter a key to close the program.");
	while(getchar()!='\n'){

	}
	getchar();
}
