#include<stdio.h>

void SumAndSub (int *ptr1, int *ptr2, int* Sum, int* Sub)
{
    *Sum = *ptr1 + *ptr2;
    *Sub = *ptr1 - *ptr2;
}
int main (void)
{
    int x=0,y=0;
    int *ptr1 = &x;
    int *ptr2 = &y;
    int Sum=0;
    int Sub=0;

    printf("Please enter the value of num1: ");
    scanf("%d",&x);
    printf("Please enter the value of num2: ");
    scanf("%d",&y);
   
    SumAndSub(ptr1,ptr2,&Sum,&Sub);
    
    printf("Sum=%d   Sub=%d\n",Sum,Sub);
    return 0;
}