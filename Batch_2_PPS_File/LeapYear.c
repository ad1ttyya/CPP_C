#include<stdio.h>

void main()
{
    int Year;
    printf("Enter Year to check\n");
    scanf("%d",&Year);
    if (Year%4==0&&Year%400)
    {
        printf("Year is leap year\n");
    }
    else
    printf("Year is not a leap year\n");
}