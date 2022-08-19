/* 2. Write a C program to get the absolute difference between n and 51.
 If n is greater than 51 return triple the absolute difference. */
 
#include <stdio.h>

void main() 
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("a = %d",a);

	if(a>51)
	{
		printf("\nAns = %d",(3*(a-51)));
	}
	else
	{
		printf("\nAns = %d", 51-a);
	}
}