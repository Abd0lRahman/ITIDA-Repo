#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num<50)
        printf("Failed");
    else if(num<65)
        printf("Normal");
    else if(num<75)
        printf("Good");
    else if(num<85)
        printf("Very good");
    else if(num>=85)
        printf("Excellent");
    else
        printf("Wrong number");
return 0;
}