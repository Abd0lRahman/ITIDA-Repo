#include<stdio.h>

int main (void)
{

    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int * ptr = arr;
    int sum;
    for(int i=0;i<10;i++)
    {
        sum += *(ptr+i);
    }

    printf("Sum=%d  \n",sum);
    return 0;
}