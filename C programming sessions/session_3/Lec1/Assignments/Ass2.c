#include<stdio.h>
#define SIZE 10
int main (void)
{
    int arr[SIZE]; 
    for(int i=0;i<10;i++)
    {
        printf("Please enter the %d number: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Negative numbers are: \n");
    for(int i=0;i<10;i++)
    {
        if(arr[i] <0)
        printf("%d \n",arr[i]);
    }
    return 0;
}