/* WRITE A C PROGRAM TO FIND THE SMALLEST AND LARGEST ELEMENT IN AN ARRAY. */

#include<stdio.h>

void main()
{
	int a[50],i,n,large,small;

	printf("How many elements:");
	scanf("%d",&n);

	printf("Enter the Array: \n");
 
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	
	large=small=a[0];

	for(i=1;i<n;++i)
	{
		if(a[i]>large)
			large=a[i];
		if(a[i]<small)
			small=a[i];
	}
	
	printf("The largest element is %d \n",large);
	printf("The smallest element is %d \n",small);
 
}