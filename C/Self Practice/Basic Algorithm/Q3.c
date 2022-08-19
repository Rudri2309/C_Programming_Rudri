/* 3. Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30.*/

#include <stdio.h>

void main()
{
	int a,b;
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("Enter number 2: ");
	scanf("%d",&b);
	printf("a = %d, b = %d",a,b);
	
	if((a==30||b==30)||(a+b == 30))
	{
		printf("\nTrue");
	}
	else
	{
		printf("\nFalse");
	}
} 
