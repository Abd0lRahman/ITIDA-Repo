#include<stdio.h>

int main (void)
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("Please enter the %d number: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The numbers in reversed order:\n");
    for(int i=9;i>=0;i--)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}
    