#include<stdio.h>

void prime(int x, int y);

int main (void)
{
    int num1,num2;
    printf("enter the 1 number: ");
    scanf("%d",&num1);
    printf("enter the 2 number: ");
    scanf("%d",&num2);
    prime(num1, num2);
    return 0;
}
void prime(int x, int y)
{
    int prime =1;
    for (int i=x;i<=y;i++)
    {
        prime =1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime = 0;
            }  
        }
        if(prime == 1)
            printf("%d\n",i);
    }
}