#include<stdio.h>

void main()
{
	int a=10,c=36;
	printf("---------------Printing Address through variable--------------");
	printf("\nPrinting Address of A through variable: %u",&a);
	printf("\nPrinting Address of C through variable: %u",&c);
	int *b;
	int *d;
	
	b=&a;
	d=&c;
	
	printf("\n\n\n---------------Printing Address through pointer--------------");
	printf("\n\nPrinting Address of A through pointer: %u",b);
	printf("\nPrinting Address of C through pointer: %u",d);
	
	printf("\n\n\n---------------Printing Value through variable--------------");
	printf("\n\nPrinting Value of A through variable: %d",a);
	printf("\nPrinting Value of C through variable: %d",c);
	
	printf("\n\n\n---------------Printing Value through pointer--------------");
	printf("\n\nPrinting Value of A through pointer: %d",*b);
	printf("\nPrinting Value of C through pointer: %d",*d);
	
}