#include<stdio.h>

int main (void)
{
    int arr[10],Sum=0;
    for(int i=0;i<10;i++)
    {
        printf("Please enter the %d number: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        Sum+=arr[i];
    }
    printf("The sum = %d & Average = %f\n",Sum,((float)Sum)/10);
    return 0;
}
    