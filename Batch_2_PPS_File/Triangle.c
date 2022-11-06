#include<stdio.h>

void main()
{
    int A1,A2,A3;
    printf("Enter Three angles of a triangle\n");
    scanf("%d%d%d",&A1,&A2,&A3);
    if (A1==A2&&A1==A3)
    {
        printf("Triangle is Equlatral\n");
    }
    else
    {
        if (A1!=A2&&A1!=A3)
        {
            printf("Triangle is scalene\n");
        }
        else
            printf("Isocilis Triangle\n");
    }
}