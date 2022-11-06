#include<stdio.h>

void main()
{
    int number,counter=1;
    printf("Enter Number to print ");
    scanf("%d",&number);
    for (counter=1; counter<=10; counter++)
    {
        printf("\n%d x %d = %d",number,counter,counter*number);
    }
    printf("\n");
}