#include <stdio.h>

void main()
{
	int a,b;
	printf("Enter number A and B ");
	scanf("%d%d",&a,&b);
	printf("A = %d , B = %d",a,b);
	printf("\nAddition= %d\n",(a+b));
	printf("Subtraction= %d\n",(a-b));
	printf("Multiplication= %d\n",(a*b));
	printf("Division= %.2f\n",(a/(float)b));
}
