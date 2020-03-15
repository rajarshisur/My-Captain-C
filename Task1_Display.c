/*WRITE A C PROGRAM TO READ THE NAME, AGE AND PHONE NUMBER FROM THE USER, STORE THEM IN VARIABLES AND DISPLAY THEM BACK. */

#include<stdio.h>

void main()
{
	char name[20];
	 int age;
	 int number;

	 printf("Enter the name: ");
	scanf("%s", &name);
	 printf("Enter the age: ");
	scanf("%d", &age);
	printf("Enter the phone number: ");
	 scanf("%d", &number);
	
	

	printf("Name: %s \n", name);
	printf("Age: %d \n", age);
	printf("Phone number: %d \n", number);



}

