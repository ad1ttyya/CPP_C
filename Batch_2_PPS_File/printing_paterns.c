#include<stdio.h>

void main()
{
    int counter_1,counter_2;
    for (counter_1 = 5; counter_1 >0; counter_1--)
    {
        for (counter_2 = 5; counter_2 >=counter_1; counter_2--)
        {
            printf("%d ",counter_2);
        }
        printf("\n");
    }
}