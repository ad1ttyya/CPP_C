#include<stdio.h>
#include<conio.h>

void main()
{
    int M1,M2,M3,M4,M5,Aggr;
    float Perc;
    printf("Enter Marks Scored\n");
    scanf("%d%d%d%d%d",&M1,&M2,&M3,&M4,&M5);
    Aggr=M1+M2+M3+M4+M5;
    Perc=Aggr/5;
    printf("%d\n%f",Aggr,Perc);
    // getch();

}