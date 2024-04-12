#include<stdio.h>

int IsPowerOf3(float x);

int main (void)
{
    int Num;
    printf("enter the Number: ");
    scanf("%d",&Num);
    IsPowerOf3((float)Num) == 0? printf("Yes It's power of 3\n"):printf("No It isn't power of 3\n");
    return 0;
}
int IsPowerOf3(float x)
{
    int Flag=1;
    while(x>1)
    {
        if(x/3==1)
        {
            Flag=0;
            break;
        }
        x/=3;
    }
    return Flag;
}