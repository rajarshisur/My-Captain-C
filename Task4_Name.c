/* WRITE A C PROGRAM TO READ THE FIRST NAME AND THE LAST NAME OF THE USER IN 2 DIFFERENT VARIABLES, COMBINE THEM, AND DISPLAY THEIR FULL NAME USING A SINGLE STRING*/

#include<stdio.h>
#include<string.h>

void main()
{
	char first[10], last[10], full[20];
	printf("Enter the first name: ");
	gets(first);

	printf("Enter the last name: ");
	gets(last);

	strcat(first, " ");
	strcat(first, last);

	printf("The full name is: %s \n", first);
}