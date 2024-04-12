#include<stdio.h>
int get_Max(int num1,int num2, int num3, int num4);
int get_Min(int num1,int num2, int num3, int num4);

int main (void)
{
    int num2,num1,num3,num4;
    printf("Please enter the first number: ");
    scanf("%d",&num1);
    printf("Please enter the second number: ");
    scanf("%d",&num2);
    printf("Please enter the third number: ");
    scanf("%d",&num3);
    printf("Please enter the fourth number: ");
    scanf("%d",&num4);
    printf("Maximum num= %d Minimum number= %d\n",get_Max(num1,num2,num3,num4),get_Min(num1,num2,num3,num4));
   return 0;
}
int get_Max(int num1,int num2, int num3, int num4)
{
    int Max=num1;
    if(Max<num2)
        Max=num2;
    if(Max<num3)
        Max=num3;
    if(Max<num4)
        Max=num4;
    return Max;
}
int get_Min(int num1,int num2, int num3, int num4)
{
    int Min=num1;
    if(Min>num2)
        Min=num2;
    if(Min>num3)
        Min=num3;
    if(Min>num4)
        Min=num4;
    return Min;
}