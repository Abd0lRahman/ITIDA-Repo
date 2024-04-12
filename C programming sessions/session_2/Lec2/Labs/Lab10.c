#include<stdio.h>
int get_Max(int num1,int num2);

int main (void)
{
    int num2,num1,Res;
    printf("Please enter the first number: ");
    scanf("%d",&num1);
    printf("Please enter the second number: ");
    scanf("%d",&num2);
    Res = get_Max(num1,num2);
    printf("%d\n",Res);
   return 0;
}
int get_Max(int num1,int num2)
{
    return num1+num2;
}