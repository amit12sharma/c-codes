#include <stdio.h>
#include<conio.h>
int main()
{
    float principle, time, rate, SI;
    
    printf("Amit\n");
    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    SI = (principle * time * rate) / 100;

    printf("Simple Interest = %f", SI);

    return 0;
}
