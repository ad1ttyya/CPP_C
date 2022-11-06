#include <stdio.h>
int main()
{
    int noofrowsinclass;
    int i,j;
    scanf("%d",&noofrowsinclass);
    for (i=1;i<=noofrowsinclass;++i)
    {
        if (i%2==0)
        {
            for (j=1; j<=i; j++)
            {
                printf("Fail ");
            }
        }
        else if (i%2!=2)
        {
            for (j=1; j<=i; j++)
            {
                printf("Pass ");
            }
        }
        printf("\n");
    }
	return 0;
}