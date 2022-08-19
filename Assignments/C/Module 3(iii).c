#include <stdio.h>

void main()
{
	int s1,s2,s3,s4,s5,total;
	float percentage;
	char name[12];
															
	printf("\n------Accept Student Details---------\n");
	printf("\nEnter Name: ");
	scanf("%s",&name);
	printf("\nEnter Phy Marks: ");
	scanf("%d",&s1);
	printf("\nEnter Chem Marks: ");
	scanf("%d",&s2);
	printf("\nEnter Maths Marks: ");
	scanf("%d",&s3);
	printf("\nEnter Hindi Marks: ");
	scanf("%d",&s4);
	printf("\nEnter English Marks: ");
	scanf("%d",&s5);
	total=s1+s2+s3+s4+s5;
	printf("\nTotal: %d",total);
	percentage= (float)total/5;
	printf("\nTotal percentage is: %.2f",percentage);
	
	if(percentage>75)
	{
		printf("\nDistinction");
	}
	else if((percentage>60) && (percentage<=70))
	{
		printf("\nFirst Class");
	}
	else if((percentage>50) && (percentage<=60))
	{
		printf("\nSecond Class");
	}
	else if((percentage>35) && (percentage<=50))
	{
		printf("\nPass Class");
	}
	else 
	{
		printf("\nFail");
	}
}