#include<stdio.h>

int Sum (int *ptr1, int *ptr2)
{
    return *ptr1 + *ptr2;
}
int main (void)
{
     int x=0,y=0;
    printf("Please enter the value of num1: ");
    scanf("%d",&x);
    printf("Please enter the value of num2: ");
    scanf("%d",&y);
   
    int *ptr1 = &x;
    int *ptr2 = &y;
    printf("%d",Sum(ptr1,ptr2));
    return 0;
}
    