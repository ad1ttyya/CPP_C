#include <stdio.h>
int main()
{
    int apple1,apple2,apple3;
    scanf("%d",&apple1);
    scanf("%d",&apple2);
    scanf("%d",&apple3);
    if (apple2>apple1 &&apple3>apple2)
    {
        printf("Fit into Budget");
    }
    else
    printf("Dosen't fit into Budget");
    
	return 0;
}