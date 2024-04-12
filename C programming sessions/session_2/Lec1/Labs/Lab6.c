#include<stdio.h>
int main (void)
{
    int Num=0,Fact=1;
    printf("Please enter the number to display its Factorial: ");
    scanf("%d",&Num);

    for(int i=1;i<=Num;i++)
    {
        Fact*=i;
    }
    printf("%d",Fact);
    return 0;
}