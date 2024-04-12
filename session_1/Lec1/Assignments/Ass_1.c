#include<stdio.h>
int main (void)
{
    int Num;
    printf("Please enter the number: ");
    scanf("%d",&Num);
    if((Num & 0x01)== 0)
        printf("LSB of %d is unset (0)\n",Num);
    else
        printf("LSB of %d is set (1)\n",Num);

    return 0;
}