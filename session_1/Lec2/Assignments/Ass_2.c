#include<stdio.h>
int main (void)
{
    int Num1,Num2,Num3,Num4,Num5;
    printf("Please enter the first Number: ");
    scanf("%d",&Num1);
    printf("Please enter the second Number: ");
    scanf("%d",&Num2);
    printf("Please enter the third Number: ");
    scanf("%d",&Num3);
    printf("Please enter the fourth Number: ");
    scanf("%d",&Num4);
    printf("Please enter the fifth Number: ");
    scanf("%d",&Num5);
    printf("The numbers that is divisable by 3 are :\n");
    if(Num1%3==0)
        printf("%d\n",Num1);
    if(Num2%3==0)
        printf("%d\n",Num2);
    if(Num3%3==0)
        printf("%d\n",Num3);
    if(Num4%3==0)
        printf("%d\n",Num4);
    if(Num5%3==0)
        printf("%d\n",Num5);
    return 0;
}