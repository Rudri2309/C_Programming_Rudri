/* 6. Write a C program to check whether a given temperatures is less than 0 and the other is greater than 100.*/

#include <stdio.h>

void main()
{
	int a,b;
	
	printf("Temp a = ");
	scanf("%d",&a);
	printf("Temp b = ");
	scanf("%d",&b);
	
	printf("Temp a = %d, b = %d",a,b);
	
	if ((a<0)&&(b>100))
	{
		printf("\nTrue");
	}
	else
	{
		printf("\nFalse");
	}
}