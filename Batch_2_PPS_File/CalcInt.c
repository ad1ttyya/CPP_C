#include<stdio.h>

void main()
//calculate simple int
{
    int P,R,T,S;
    printf("Enter Principal amount\n");
    scanf("%d",&P);
    printf("Enter Time\n");
    scanf("%d",&T);
    printf("Enter Rate\n");
    scanf("%d",&R);
    S=(P*T*R)/100;
    printf("\n%d",S);
}