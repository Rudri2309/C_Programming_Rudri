#include<stdio.h>

void main()
{
	int matr1[3][3];
	int i,j;
	
	printf("Accept Elements:\n ");
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			printf("Enter Element [%d][%d]: ",i,j);	
			scanf("%d", &matr1[i][j]);
		}
	}
	printf("Display Elements: \n\n");
		for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			printf("\t %d",matr1[i][j]);
		}
		printf("\n");
	}
	
}