/* 7. Write a C program to check two given integers whether either of them is in the range 100..200 inclusive.*/

#include <stdio.h>

void main()
{
	int a,b;
	
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Enter a number: ");
	scanf("%d",&b);

	printf("a = %d, b = %d",a,b);
	
	if((a>=100)&&(a<=200)||((b>=100)&&(b<=200))
	{
		printf("\nTrue");
	}
	else
	{
		printf("\nFalse");	
	}
}