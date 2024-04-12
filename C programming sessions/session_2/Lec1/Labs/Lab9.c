#include<stdio.h>
int main (void)
{
    int Num=0;
    printf("Please enter the hieght of the pyramid: ");
    scanf("%d",&Num);
    for(int i=0;i<Num;i++)
    {
        for(int j=0;j<(2*Num)-1;j++)
        {
            if(j>=Num-1-i && j<=Num-1+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}