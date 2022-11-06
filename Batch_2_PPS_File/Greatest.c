#include<stdio.h>

void main()

{
    int Num1,Num2,Num3;
    printf("Enter Three numbers of compair\n");
    scanf("%d%d%d",&Num1,&Num2,&Num3);
    if (Num1>Num2)
    {
        if (Num1>Num3)
        {
            printf("Number 1 is greatest %d\n",Num1);
        }
        
    }
    else
    {
        if (Num2>Num3)
        {
            printf("Number 2 is greatest %d\n",Num2);
        }
        else
        printf("Number 3 is greatest %d\n",Num3);    
    }
}