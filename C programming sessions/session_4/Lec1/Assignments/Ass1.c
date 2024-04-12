#include<stdio.h>

int main(void)
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};
    int* ptr1=arr1;
    int* ptr2=arr2;
    int temp;

    printf("Arrays before swap:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d    %d\n",arr1[i],arr2[i]);
    }

    for(int i=0; i<5;i++)
    {
        temp= ptr1[i];
        ptr1[i]= ptr2[i];
        ptr2[i]=temp;
    }

    printf("Arrays after swap:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d    %d\n",arr1[i],arr2[i]);
    }
    
    return 0;
}