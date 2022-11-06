#include<stdio.h>
void main()
{
    int counter,input_num;
    unsigned long int factorial=1;
    printf("Enter Number to calculate Factorial ");
    scanf("%d",&input_num);
    for (counter=1; counter<=input_num; counter++)
    {
        factorial=counter*factorial;
    }
    printf("\n%lu\n",factorial);
}