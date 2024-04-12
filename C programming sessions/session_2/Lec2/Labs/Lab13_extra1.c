#include<stdio.h>

int Fact(int x);

int main (void)
{
    int x;
    printf("Please enter the index: ");
    scanf("%d",&x);
    printf("The factorial equals: %d",Fact(x));
}

int Fact(int x)
{

    if(x==1)
        return 1;
    else
        return x * Fact (x-1);
}