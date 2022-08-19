#include <stdio.h>

union Employee{
	int eid;
	int age;
	char name[10];
	char address[100];

};

void main()
{    

	printf("\n\n------------ Employee-1 -----------------\n\n");
    
	union Employee e1;
	
	printf("Enter Id:");
	scanf("%d",&e1.eid);
	printf("Id = %d",e1.eid);
	printf("\nEnter Name:");
	scanf("%s",&e1.name);
	printf("Name = %s",e1.name);
	printf("Enter Age:");
	scanf("%d",&e1.age);
	printf("Age = %d",e1.age);
	printf("\nEnter Address :");
	scanf("%s",&e1.address);
	printf("Address = %s",e1.address);	
	
	printf("\n\n------------ Employee-2 -----------------\n\n");
	
	union Employee e2;
	
	printf("Enter Id:");
	scanf("%d",&e2.eid);
	printf("Id = %d",e2.eid);
	printf("\nEnter Name:");
	scanf("%s",&e2.name);
	printf("Name = %s",e2.name);
	printf("Enter Age:");
	scanf("%d",&e2.age);
	printf("Age = %d",e2.age);
	printf("\nEnter Address :");
	scanf("%s",&e2.address);
	printf("Address = %s",e2.address);	
	
	printf("\n\n------------ Employee-3 -----------------\n\n");
	
	union Employee e3;
	
	printf("Enter Id:");
	scanf("%d",&e3.eid);
	printf("Id = %d",e3.eid);
	printf("\nEnter Name:");
	scanf("%s",&e3.name);
	printf("Name = %s",e3.name);
	printf("Enter Age:");
	scanf("%d",&e3.age);
	printf("Age = %d",e3.age);
	printf("\nEnter Address :");
	scanf("%s",&e3.address);
	printf("Address = %s",e3.address);	
	
	printf("\n\n------------ Employee-4 -----------------\n\n");
	
	union Employee e4;
	
	printf("Enter Id:");
	scanf("%d",&e4.eid);
	printf("Id = %d",e4.eid);
	printf("\nEnter Name:");
	scanf("%s",&e4.name);
	printf("Name = %s",e4.name);
	printf("Enter Age:");
	scanf("%d",&e4.age);
	printf("Age = %d",e4.age);
	printf("\nEnter Address :");
	scanf("%s",&e4.address);
	printf("Address = %s",e4.address);
	
	printf("\n\n------------ Employee-5 -----------------\n\n");
	
	union Employee e5;
	
	printf("Enter Id:");
	scanf("%d",&e5.eid);
	printf("Id = %d",e5.eid);
	printf("\nEnter Name:");
	scanf("%s",&e5.name);
	printf("Name = %s",e5.name);
	printf("Enter Age:");
	scanf("%d",&e5.age);
	printf("Age = %d",e5.age);
	printf("\nEnter Address :");
	scanf("%s",&e5.address);
	printf("Address = %s",e5.address);
}
