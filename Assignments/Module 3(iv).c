#include<stdio.h>

void main()
{
   int choice;

	printf("\n-----------Choice Calculator----------------\n");
	printf("\nPress 1.Area of Triangle, \nPress 2.Area of Rectangle, \nPress 3.Area of Circle");
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
  
   switch(choice) 
   {
      case 1: {
         int a,b,c;
         float s,area;
         printf("Enter sides of triangle\n");
         scanf("%d%d %d",&a,&b,&c);
         s=(float)(a+b+c)/2;
         area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
         printf("Area of Triangle is %.2f\n",area);
         break;
      }
      case 2: 
	  {
	  	float length,breadth,area;
         printf("Enter Length and Breadth of Rectangle\n");
         scanf("%f %f",&length,&breadth);
         area=(float)length*breadth;
         printf("Area of Rectangle is %.2f\n",area);
         break;
      }
      case 3: 
	  {
         float radius,area;
         printf("Enter Radius of Circle\n");
         scanf("%f",&radius);
         area=(float)3.14*radius*radius;
         printf("Area of Circle %.2f\n",area);
         break;
      }
        default: 
		{
         printf("Invalid Choice\n");
         break;
        }
   }
}