#include<stdio.h>

void main()
{
	char name[10] = "abc";
	char sname[10] = "ABC";
	char empty[10];
	printf("String Length : %d", strlen(name));
	printf("\nString Reverse: %s",strrev(name)); 
}