#include<stdio.h>
int main (void)
{
    int NotCorrect=1,Num;
    printf("Please enter the result of 3x4: ");
    scanf("%d",&Num);
    while(NotCorrect)
    {
        if(Num!=12)
        {
            printf("Not correct, please try again: ");
            scanf("%d",&Num);
        }
        else
        {
            printf("Thank you");
            NotCorrect=0;
        }
    }
    return 0;
}