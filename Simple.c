#include<stdio.h>

void main()
{
    int P,T,R,TOT;
    printf("Enter Principle amount time and rate of intrist\n");
    scanf("%d%d%d",&P,&T,&R);
    TOT=(P*R*T)/100;
    TOT=TOT+P;
    printf("Amount is %d",TOT);
}