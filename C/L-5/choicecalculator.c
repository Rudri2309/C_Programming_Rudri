#include <stdio.h>

void main()
{
	int a,b,choice;
	printf("Enter number A , B: ");
	scanf("%d%d",&a,&b);
	printf("A is %d and B is %d",a,b);
	
	printf("\n-----------Choice Calculator----------------\n");
	printf("\nPress 1.Addition, \nPress 2.Subtraction, \nPress 3.Multiplication, \nPress 4.Division");
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("\nAddition is %d", (a+b));
	}
	else if(choice==2)
	{
		printf("\nSubtraction is %d", (a-b));
	}
	else if(choice==3)
	{
		printf("\nMultiplication is %d", (a*b));
	}
	else if(choice==4)
	{
		printf("\nDivision is %.2f", (a/(float)b));
	}
	else
	{
		printf("Invalid Choice");
	}
}