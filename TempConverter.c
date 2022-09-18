#include<stdio.h>
#include<conio.h>

void main()
{
    float F,C;
    printf("Enter Temprature in Faar\n");
    scanf("%f",&F);
    C=5*(F-32)/9;
    printf("The Temprature is %f", C);

}