#include <stdio.h>

int main(void)
{
    int Hours;
    printf("please enter your working hours: ");
    scanf("%d",&Hours);
    if(Hours>40)
        printf("Your salary is %d",Hours*50);
    else
        printf("Your salary is %d", (int)(Hours*50*0.9));

return 0;
}