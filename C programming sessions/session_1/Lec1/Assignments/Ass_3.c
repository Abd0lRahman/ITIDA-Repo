#include<stdio.h>
int main (void)
{
    int Num=0,Counter=0,Num1=0;
    printf("Please enter the number: ");
    scanf("%d",&Num1);
    Num=Num1;
    if(Num1 == 0)
    printf("Lowest order set bit in 0 is 0\n");  
    else
    {
        for(int i=0;i<32;i++)
        {
            if((Num & 0x01) == 0)
                {
                    Counter++;
                    Num=Num>>1;
                }
            else
                break;
        }
        printf("Lowest order set bit in %d is %d\n",Num1,Counter);
    }
    return 0;
}
