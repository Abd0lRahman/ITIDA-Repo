#include<stdio.h>
int main (void)
{
    int Num;
    printf("Please enter the number to display its multiplication table: ");
    scanf("%d",&Num);

    for(int i=1;i<=Num;i++)
    {
        printf("%d*%d=%d\n",Num,i,Num*i);
    }
    return 0;
}