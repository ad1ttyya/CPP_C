#include<stdio.h>

void main()
{
    int number,counter=1;
    printf("Enter Number to print ");
    scanf("%d",&number);
    while (counter<=10)
    {
        printf("\n%d x %d = %d",number,counter,counter*number);
        counter++;
    }
    printf("\n");
}