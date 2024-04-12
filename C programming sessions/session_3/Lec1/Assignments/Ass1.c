#include<stdio.h>
#define SIZE 10
void BubbleSort(int *ptr, int size);

int main (void)
{
    int arr[SIZE]; 
    for(int i=0;i<10;i++)
    {
        printf("Please enter the %d number: ",i+1);
        scanf("%d",&arr[i]);
    }
    BubbleSort( arr, SIZE);
    printf("Array after sorting Largest element= %d & The Secound largest element= %d\n",arr[9],arr[8]);
    

    return 0;
}

void BubbleSort(int *ptr, int size) 
{
    int SwapVar=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                SwapVar=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=SwapVar;
            }
        }
    }
}