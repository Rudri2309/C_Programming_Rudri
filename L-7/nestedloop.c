#include<stdio.h>

void main()
{
	int i,j,table;
	
	printf("---------------------------Tables 2-10----------------------------------");
	
	for(i=2;i<=10;i++)
	{
		printf("\n=======================================");
		printf("\n\n----------Table of %d--------------",i);
	    printf("\n=======================================");
		for(j=1;j<=10;j++)
		{
			table= i*j;
			
			printf("\n%d X %d = %d", i,j,table);
		}
	}
}