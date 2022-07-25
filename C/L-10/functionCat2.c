#include<stdio.h>

void add(int a, int b)
{
	printf("\nAddition = %d", (a+b));
}

void sub(int a, int b)
{
	printf("\nSubtraction = %d", (a-b));
}

void mult(int a, int b)
{
	printf("\nMultiplication = %d", (a*b));
}

void div(int a, int b)
{
	printf("\nDivision = %.2f", (a/(float)b));
}

void main()
{
	int a,b,choice;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("a = %d, b = %d",a,b);
	
	printf("\n-----------Choice Calculator----------------\n");
	printf("\nPress 1.Addition, \nPress 2.Subtraction, \nPress 3.Multiplication, \nPress 4.Division");
	printf("\n\nEnter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
				case 1: add(a,b);
		    			break;
				case 2: sub(a,b);
		    			break;
				case 3: mult(a,b);
		    			break;
				case 4: div(a,b);
	    				break;
	    		default: printf("Invalid Choice");
	    				break;
	}
}
