#include<stdio.h>

void main()
{
	int a=10,c;
	printf("Printing Address of A through variable: %u",&a);
	printf("\nPrinting Address of C through variable: %u",&c);
	int *b;
	int *d;
	
	b=&a;
	d=&c;
	
	printf("\n\nPrinting Address of A through pointer: %u",b);
	printf("\nPrinting Address of C through pointer: %u",d);
}