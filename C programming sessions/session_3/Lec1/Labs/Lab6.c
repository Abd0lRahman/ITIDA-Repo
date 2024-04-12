#include<stdio.h>
#define SIZE 10


int main (void)
{
    int arr[SIZE],Mini,Max;
    for(int i=0;i<10;i++)
    {
        printf("Please enter the %d number: ",i+1);
        scanf("%d",&arr[i]);
    }
    Mini =arr[0];
    Max  = arr[0];
    for(int i=0;i<10;i++)
    {
        if(arr[i]<Mini)
            Mini = arr[i];
        if(arr[i]>Max)
            Max = arr[i];
    }
    printf("Mini = %d Max= %d\n",Mini,Max);

    return 0;
}