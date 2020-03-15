/*WRITE A C PROGRAM TO TAKE THE TEMPERATURE IN CELSIUS AND CONVERT IT TO FAHRENHEIT AND DISPLAY IT BACK.*/

#include<stdio.h>


void main()
{
	
	float ctemp=0;
	printf("Enter the tempertature in celsius: ");
	scanf("%f", &ctemp);
	float ftemp=0;
	ftemp = ctemp * 1.8 + 32;
	printf("Farenheit temperature: %f \n", ftemp);
	
}