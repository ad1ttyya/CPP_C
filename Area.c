#include<stdio.h>
#include<conio.h>

void main()
{
    int L,B,Area,Pere;
    printf("Enter Lenght and Bredth\n");
    scanf("%d%d",&L,&B);
    Area=L*B;
    Pere=(L+B)*2;
    printf("Area and Pere %d\t%d", Area,Pere);
}