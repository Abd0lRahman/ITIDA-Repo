#include<stdio.h>
int main (void)
{
    int Num,Sum=0;
    printf("Please enter the 10 numbers\n");
    for(int i =1;i<11;i++)
    {
        printf("Number-%d :",i);
        scanf("%d",&Num);
        Sum+=Num;
    }
    printf("Sum=%d\n",Sum);
    printf("Average=%d",Sum/10);
    return 0;
}