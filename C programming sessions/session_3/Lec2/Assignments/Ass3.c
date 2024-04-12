#include<stdio.h>

#define SIZE 10

int main (void)
{
    int arr[SIZE]; 
    int * ptr =arr;
    for(int i=0;i<10;i++)
    {
        printf("Please enter the %d number: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array in reverse: \n");
    for(int i=9;i>=0;i--)
    {
        printf("%d \n",*(ptr+i));
    }
    return 0;
}