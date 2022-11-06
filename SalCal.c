#include<stdio.h>
//Calculating Gross Salary
void main()
{
    int Salary,D,H,Gross;
    printf("Enter Salary \n");
    scanf("%d",&Salary);
    D=Salary*0.4;
    H=Salary*0.2;
    Gross=Salary+D+H;
    printf("\nGross Salary is %d",Gross);
}