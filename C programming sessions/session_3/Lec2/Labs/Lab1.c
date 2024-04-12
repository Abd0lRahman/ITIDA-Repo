#include<stdio.h>

int main (void)
{
    int x=10;
    int *ptr = &x;
    printf("x before= %d\n",x);
    *ptr = 20;
    printf("x after= %d",x);
    return 0;
}