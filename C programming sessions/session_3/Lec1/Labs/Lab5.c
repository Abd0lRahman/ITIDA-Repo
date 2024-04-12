#include<stdio.h>
#define SIZE 10

void BubbleSort(int *ptr, int size);
int BinarySearch(int *ptr,int size,int Number);

int main (void)
{
    int arr[SIZE],Value,BinarySearchResult;
    for(int i=0;i<10;i++)
    {
        printf("Please enter the %d number: ",i+1);
        scanf("%d",&arr[i]);
    }
    BubbleSort( arr, SIZE);

    printf("Array after sorting\n");

    for(int i=0;i<10;i++)
    {
        printf("%d    ",arr[i]);
    }
    printf("\nPlease enter the the value to search: ");
    scanf("%d",&Value);
    BinarySearchResult = BinarySearch( arr, SIZE, Value);
    BinarySearchResult != -1?printf("The %d number is exist in %d index\n",Value,BinarySearchResult):printf("The value isn't exist\n");
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

int BinarySearch(int *ptr,int size,int Number) 
{
    int StartOfIndex=0,LastIndex=size,MyIndex;
    MyIndex=(LastIndex-StartOfIndex)/2;

    for(int i=0;i<size;i++)
    {
        if(ptr[MyIndex]==Number)
            return MyIndex;
        else if(ptr[MyIndex]>Number)
        {
            StartOfIndex=StartOfIndex;
            LastIndex=MyIndex;
            MyIndex=(LastIndex+StartOfIndex)/2;
        }
        else
        {
            StartOfIndex=MyIndex;
            LastIndex=LastIndex;
            MyIndex=(LastIndex+StartOfIndex)/2;
        }
        if(StartOfIndex==MyIndex && LastIndex==size-1)
            break;
    }
    return -1;
}