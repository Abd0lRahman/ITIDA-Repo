#include<stdio.h>
int x=10,y=20;
void Swap(void);


int main (void)
{
    printf("x before swap = %d\n",x);
    printf("y before swap = %d\n",y);
    Swap();
    printf("x after swap = %d\n",x);
    printf("y after swap = %d\n",y);
    return 0;
}
void Swap(void)
{
    int temp=x;
    x=y;
    y=temp;
}