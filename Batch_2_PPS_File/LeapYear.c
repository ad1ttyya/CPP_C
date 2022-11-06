#include<stdio.h>

void main()
{
    int Year;
    printf("Enter Year to check\n");
    scanf("%d",&Year);
    if (((Year % 4 == 0) && (Year % 100!= 0)) || (Year%400 == 0))
    {
        printf("Year %d is leap year\n",Year);
    }
    else
    printf("Year %d is not a leap year\n",Year);
}