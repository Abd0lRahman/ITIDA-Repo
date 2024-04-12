#include<stdio.h>
#define SIZE 10

int main (void)
{
    int arr[SIZE],Counter=0,Value;
    for(int i=0;i<10;i++)
    {
        printf("Please enter the %d number: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Please enter the value to search: ");
    scanf("%d",&Value);
    for(int i=0;i<10;i++)
    {
        if(Value == arr[i])
            Counter++;
    }
    printf("The %d number is exist %d times",Value,Counter);
    return 0;
}