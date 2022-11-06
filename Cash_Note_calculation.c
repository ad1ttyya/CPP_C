#include<stdio.h>
void main()
{
   int initial_amount, no_of_10,no_of_50,no_of_100;
   printf("Enter Amount ");
   scanf("\n%d",&initial_amount);
   no_of_100=initial_amount/100;
   no_of_50=initial_amount%100/50;
   no_of_10=initial_amount%100%50/10;
   printf("\n%d\t%d\t%d",no_of_100,no_of_50,no_of_10);
}