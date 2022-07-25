#include <stdio.h>

void main()
{
	int rollno,s1,s2,s3,total;
	float percentage;
	char name[12];
	
	printf("\n------Accept Student Details---------\n");
	printf("\nEnter Roll No: ");
	scanf("%d",&rollno);
	printf("\nEnter Name: ");
	scanf("%s",&name);
	printf("\nEnter Phy Marks: ");
	scanf("%d",&s1);
	printf("\nEnter Chem Marks: ");
	scanf("%d",&s2);
	printf("\nEnter Maths: ");
	scanf("%d",&s3);
	total=s1+s2+s3;
	printf("\nTotal: %d",total);
	percentage= (float)total/3;
	printf("\nTotal percentage is: %.2f",percentage);
	
	if(percentage>75)
	{
		printf("\nDistinction");
	}
	else if(percentage>60)
	{
		printf("\nGrade A");
	}
	else if(percentage>50)
	{
		printf("\nGrade B");
	}
	else if(percentage>40)
	{
		printf("\nGrade C");
	}
	else 
	{
		printf("\nFail");
	}
}