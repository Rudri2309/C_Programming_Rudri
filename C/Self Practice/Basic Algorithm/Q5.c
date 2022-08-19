/* 5. Write a C program to check whether a given positive 
number is a multiple of 3 or a multiple of 7.*/

#include<stdio.h>

void main()
{
	int a;
	printf("Enter number a= ");
	scanf("%d",&a);
	printf("a = %d",a);	
	if((a%3==0)||(a%7==0))
	{
		printf("\nTrue");
	}
	else
	{
		printf("\nFalse");
	}
} 