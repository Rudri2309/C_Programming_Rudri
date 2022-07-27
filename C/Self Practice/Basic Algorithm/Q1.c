/* 1. Write a C program to compute the sum of the two given integer values. 
If the two values are the same, then return triple their sum. */

#include <stdio.h>  
  
void  main()  
{  
    int arr[10]; 
    int i;  
       
	   printf("\n\nRead and Print elements of an array:\n");
       printf("-----------------------------------------\n");	
  
    printf("Input 10 elements in the array :\n");  
    for(i=0; i<10; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nElements in array are: ");  
    
    for(i=0; i<10; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\n");	
}
