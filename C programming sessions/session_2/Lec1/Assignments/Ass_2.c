#include<stdio.h>
int main (void)
{
    int Counter=0,Numm,Num;
    printf("Please enter the number: ");
    scanf("%d",&Numm);
    Num=Numm;

    if(Num == 0 )
        printf("Number of digits in 0 is 1");
    
    else
    {
        while(Num>0)
        {
            Num=Num/10;
            Counter++;
        }
        printf("Number of digits in %d is %d",Numm,Counter);
    }
    return 0;
}