#include<stdio.h>

int PerfectSqr(int x);

int main (void)
{
    int num1,root;
    printf("enter the number: ");
    scanf("%d",&num1);
    root = PerfectSqr(num1);
    if(root==0)
    printf("Not perfect square");
    else
    printf("It's perfect and the root is %d\n",root);
    return 0;
}
int PerfectSqr(int x)
{
    if (x==1)
        return 1;
    for (int i=2;i<x/2;i++)
    {
        if((x/i) == i)
            return i;
    }
    return 0;
}