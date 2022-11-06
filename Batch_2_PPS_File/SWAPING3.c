#include<stdio.h>

void main()
{
    int Num1,Num2,Num3;
    printf("Enter Two numbers\n");
    scanf("%d%d", &Num1,&Num2);
    Num3=Num1;
    Num1=Num2;
    Num2=Num3;
    printf("%d\t%d\n",Num1,Num2);
}