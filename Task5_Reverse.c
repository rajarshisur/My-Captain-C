/* WRITE A C PROGRAM TO FIND THE REVERSE OF A GIVEN NUMBER. */

#include<stdio.h>

void main()
{
	int num;
	int rev, n;
	rev = 0;

	printf("Enter the number: ");
	scanf("%d", &num);

	n = num;

	while(n>0)
	{
		rev = rev * 10;
    	rev = rev + n%10;
    	n = n/10;
	}

	printf("The reverse is: %d ", rev);
}