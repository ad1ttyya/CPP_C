#include<stdio.h>
#include<stdlib.h>
void main()
{
    int user_selection;
    int input_num1,input_num2;
    while (user_selection!=5)
    {
        printf("\n\t\t\t\t CALCULATOR\nEnter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multplication\nEnter 4 for division\nEnter 5 to exit\n");
        scanf("%d",&user_selection);
        switch (user_selection)
        {
        case 1:
            system("clr");
            printf("Enter the two Numbers\n");
            scanf("%d%d",&input_num1,&input_num2);
            printf("\n%d",input_num1+input_num2);
            break;
        case 2:
            system("clr");
            printf("Enter the two Numbers\n");
            scanf("%d%d",&input_num1,&input_num2);
            printf("\n%d",input_num1-input_num2);
            break;
        case 3:
            system("clr");
            printf("Enter the two Numbers\n");
            scanf("%d%d",&input_num1,&input_num2);
            printf("\n%d",input_num1*input_num2);
            break;
        case 4:
            system("clr");
            printf("Enter the two Numbers\n");
            scanf("%d%d",&input_num1,&input_num2);
            printf("\n%d",input_num1/input_num2);
            break;
        case 5:
            break;
                
        default:
            printf("Enter Valid choice\n");
        }
    }
}