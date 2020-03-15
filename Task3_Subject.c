/* WRITE A C PROGRAM TO TAKE MARKS IN 3 SUBJECTS AND DISPLAY THEIR SUM AND AVERAGE. */

#include<stdio.h>

void main()
{
	int m1, m2, m3;
	int sum=0;
	float avg=0;

	printf("Enter the 3 marks: ");
	scanf("%d %d %d", &m1, &m2, &m3);

	sum = m1 + m2 + m3;
	avg = sum/3;

	printf("Sum of the marks is: %d \n", sum);
	printf("Average of marks is: %f \n", avg);

}