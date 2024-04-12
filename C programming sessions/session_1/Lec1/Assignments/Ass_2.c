#include<stdio.h>
int main (void)
{
    int Num,index;
    printf("Please enter the number: ");
    scanf("%d",&Num);
    printf("Please enter the index of the bit to set (0-31): ");
    scanf("%d",&index);
    printf("The value before setting the %d bit is %d\n",index,Num);
    Num|=(1<<index);
    printf("The value after setting the %d bit is %d\n",index,Num);
    return 0;
}