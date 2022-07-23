#include<stdio.h>

void main()
{
	int matr1[3][3],matr2[3][3],matr3[3][3];
	int i,j;
	
	printf("\n\n********** Matrix 1 ************\n\n");
	
	printf("Accept Elements:\n");
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			printf("Enter Element [%d][%d] of Matrix1: ",i,j);	
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
	
	printf("\n\n********** Matrix 2 ************\n\n");
	
	printf("Accept Elements:\n ");
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			printf("Enter Element [%d][%d] of Matrix2: ",i,j);	
			scanf("%d", &matr2[i][j]);
		}
	}
	printf("Display Elements: \n\n");
		for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			printf("\t %d",matr2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n***************** Matrix 3 **********************\n\n");
	
	printf("Display Elements: \n\n");
	
		for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			matr3[i][j] = matr1[i][j] + matr2[i][j];
			printf("\t %d",matr3[i][j]);
		}
		printf("\n");
	}
	
	
	
}