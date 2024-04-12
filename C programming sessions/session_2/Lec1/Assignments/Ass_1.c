#include<stdio.h>
int main (void)
{
    int Num,Power,FinalNumber=1;
    printf("Please enter the number: ");
    scanf("%d",&Num);
    printf("Please enter the power: ");
    scanf("%d",&Power);
    for(int i=0;i<Power;i++)
        FinalNumber*=Num;
    
    printf("The arithmatic operation is: %d ^ %d = %d",Num,Power,FinalNumber);

    return 0;
}