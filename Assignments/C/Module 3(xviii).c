#include <stdio.h>

void main()
{
	
   int a, b, *p, *q, sum;

   printf("Enter a = ");      
   scanf("%d", &a);
   printf("Enter b = ");
   scanf("%d",&b);
   p = &a;
   q = &b;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);

}
