#include<stdio.h>

void swap(int *a, int*b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void main()
{
	int a = 10, b = 20;
	printf("\nBefore Swapping a = %d, b = %d",a,b);
	swap(&a,&b);
	printf("\nAfter Swapping a = %d, b = %d",a,b);
}