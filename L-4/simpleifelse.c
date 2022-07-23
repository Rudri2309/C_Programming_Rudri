#include <stdio.h>

void main()
{
	int a,b;
	printf("\nEnter number 1: ");
	scanf("%d", &a);
	printf("\nEnter number 2: ");
	scanf("%d", &b);
	printf("\na is %d",a);
	printf("\nb is %d",b);
	
	if(a>b)
	{
		printf("\na is greater than b");
	}
	else
	{
		printf("\na is less than b");
	}
}