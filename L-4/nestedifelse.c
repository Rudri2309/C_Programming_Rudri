#include <stdio.h>

void main()
{
	int a,b,c;
	printf("Enter number A: ");
	scanf("%d",&a);
	printf("Enter number B: ");
	scanf("%d",&b);
	printf("Enter number C: ");
	scanf("%d",&c);
	printf("\nA = %d",a);
	printf("\nB = %d",b);
	printf("\nC = %d",c);	
	if(a>b)
	{
		if(a>c)
		{
			printf("\nA is greater");
		}
		else
		{
			printf("\nC is greater");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\nB is greater");
		}
		else
		{
			printf("\nC is greater");
		}
	}
	
}