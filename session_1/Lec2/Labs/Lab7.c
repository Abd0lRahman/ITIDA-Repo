#include<stdio.h>
int main(void)
{
    int num1,num2,num3;
    printf("Enter number1: ");
    scanf("%d",&num1);
    printf("Enter number2: ");
    scanf("%d",&num2);
    printf("Enter number3: ");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3)
        printf("The biggest number is %d\n",num1);
    else if(num2>num1 && num2>num3)
        printf("The biggest number is %d\n",num2);
    else
        printf("The biggest number is %d\n",num1);
return 0;
}