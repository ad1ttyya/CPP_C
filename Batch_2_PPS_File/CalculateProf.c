#include<stdio.h>

void main()
{
    int CP,SP,PROF,PP;
    printf("Enter CP\n");
    printf("Enter SP\n");
    scanf("%d%d",&CP,&SP);
    PROF=SP-CP;
    PP=100*PROF/CP;
    printf("Profit is %d\n",PROF);
    printf("Profit PERCENTAGE %d",PP);
}
