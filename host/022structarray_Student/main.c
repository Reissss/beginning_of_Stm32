/*
 * main.c
 *
 *  Created on: 14 Mar 2023
 *      Author: ahmet
 */


#include <stdio.h>
#include <stdint.h>

typedef struct{
	uint32_t roll_Number;
	char full_Name[75];
	char day_ofBirth[15];
	char departmant[50];
	uint16_t semister;

}STUDENT_INFO_t;

STUDENT_INFO_t student[10];
void wait();
void add_student();
void show_student();

int main(void){
	printf("Student record management program.");
	uint8_t choice=0;
	while(1){
		printf("\nDisplay all records --> 1");
		printf("\nAdd new record --> 2");
		printf("\nDelete a records --> 3");
		printf("\nExit application --> 0");
		printf("\nEnter your option here = ");
		scanf("%d",&choice);
		if (choice==1){
			show_student();
		}
		else if (choice==2){
			add_student();
		}
		else if (choice==3) {

		}
		else if (choice==0) {

		}
	}
	wait();
	return 0;
}

void add_student(){
	//finding empty block
	int index=0;
	for(int i=0;i<10;i++){
		if(student[i].roll_Number==0){
			index=i;
		}
	}
	printf("\nPlease enter the roll number = ");
	scanf("%d",&student[index].roll_Number);
	printf("\nPlease enter the full name  = ");
	scanf("%s",&student[index].full_Name);
	printf("\nPlease enter the departmant  = ");
	scanf("%s",&student[index].departmant);
	printf("\nPlease enter the birthday dd/mm/yyyy  = ");
	scanf("%s",&student[index].day_ofBirth);
	printf("\nPlease enter the semister  = ");
	scanf("%hd",&student[index].semister);
	printf("\nStudent has been recorded.");
}
void show_student(){
	for(int i=0;i<10;i++){
		if (student[i].roll_Number!=0) {
			printf("\nRoll number = %d",student[i].roll_Number);
			printf("\nRoll number = %s",student[i].full_Name);
			printf("\nRoll number = %s",student[i].departmant);
			printf("\nRoll number = %s",student[i].day_ofBirth);
			printf("\nRoll number = %d",student[i].semister);
		}

	}
}

void wait(){
	while(getchar()!='\n'){

	}
	getchar();
}
