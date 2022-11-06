#include<stdio.h>

void main()

{
    int Num1,Num2,Num3;
    printf("Enter Three numbers of compair\n");
    scanf("%d%d%d",&Num1,&Num2,&Num3);
    if (Num1>Num2 && Num1>Num3)
    {
        printf("First number is greatest %d",Num1);
    }
    else if (Num2>Num1 &&Num2>Num3)
    {
        printf("Second number is greatest %d",Num2);
    }
    else
    {
        printf("Third number is greatest %d",Num3);
    }
}