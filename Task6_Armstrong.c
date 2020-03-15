/* WRITE A C PROGRAM TO CHECK IF THE GIVEN NUMBER IS AN ARMSTRONG NUMBER OR NOT. */

#include<stdio.h>

void main()    
{    
	int n,r,sum=0,temp;  

	printf("Enter the number = ");    
	scanf("%d",&n);    

	temp=n;    

	while(n>0)    
	{    
	r=n%10;    
	sum=sum+(r*r*r);    
	n=n/10;    
	}    

	if(temp==sum)    
	printf("Armstrong  number \n");    
	else    
	printf("NOT Armstrong number \n");   

}