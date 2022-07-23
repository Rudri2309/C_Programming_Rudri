#include <stdio.h>


void main()
{
    float principle, rate, time, SI, CI;

    printf("\nEnter principle (amount): ");
    scanf("%f", &principle);

    printf("\nEnter time: ");
    scanf("%f", &time);

    printf("\nEnter rate: ");
    scanf("%f", &rate);
    
	SI= (principle*rate*time)/100;
	printf("SI= %.2f",SI);	
	
	CI = principle* (((1 + rate / 100), time));
	printf("\nCompound Interest = %.2f", CI);
}