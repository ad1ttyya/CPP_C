#include<stdio.h>
#include<math.h>

void main()
{
    float P,T,R,A;
    printf("Enter Principle amount time and rate of intrist\n");
    scanf("%f%f%f",&P,&T,&R);
    A=P*pow(1+R,T);
    printf("%f",A);
}