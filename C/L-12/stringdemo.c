#include<stdio.h>

void main()
{
	char name[10] = "abc";
	char sname[10] = "ABC";
	char empty[10];
	printf("String Length : %d", strlen(name));
	printf("\nString Reverse: %s",strrev(name)); 
	printf("\nString Concatenate: %s",strcat(name,sname));
	strcpy(empty,name);
	printf("\nString Copy : %s",empty);
	printf("\nString Compare : %d",strcmp(name,sname));
	printf("\nString UpperCase : %s",strupr(name));
	printf("\nString LowerCase : %s",strlwr(sname));

}
