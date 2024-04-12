#include<stdio.h>
#include<stdlib.h>
void BubbleSort(int *ptr, int size);

int main(void)
{
    int* ptr = NULL;
    ptr = (int*)malloc(5*sizeof(int));
    if(ptr!=NULL)
    {
        for(int i=0;i<5;i++)
        {
            printf("please enter the %d number:",i+1);
            scanf("%d",&ptr[i]);
        }
        BubbleSort(ptr,5);
        printf("Values after sorting are\n");
        for(int i=0;i<5;i++)
        {
            printf("%d\n",ptr[i]);
        }
    }
    else
    {
        printf("Allocation fail\n");
    }
    
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