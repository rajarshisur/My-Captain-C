// WRITE A C PROGRAM TO READ AN INTEGER AND PRINT ITS MULTIPLICATION TABLE.
#include<stdio.h>
void main()
{ 
	int n;
	printf("Enter an integer whose multiplication table you want: \n");
	scanf("%d",&n);
	printf("The multiplication table is: \n");
	for(int i=1; i<11;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}

}