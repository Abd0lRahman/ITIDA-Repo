#include<stdio.h>
#define SIZE 10

int main (void)
{
    int arr1[SIZE]={90,10,30,13,56,78,99,22,19,98};
    int arr2[SIZE]={99,11,31,14,57,79,98,21,14,100};
    int arr3[SIZE]={97,12,32,15,58,75,90,25,34,95};

    int CounterPassed=0,CounterFailed=0,HighestGrade=arr1[0],Sum=0,LowestGrade=arr1[0];
    float average=0;
    
    for(int i=0;i<SIZE;i++)
    {
        if(arr1[i]>=50)
            CounterPassed++;
        else
            CounterFailed++;

        if(arr2[i]>=50)
            CounterPassed++;
        else
            CounterFailed++;
        
        if(arr3[i]>=50)
            CounterPassed++;
        else
            CounterFailed++;

        if(HighestGrade<arr1[i])
            HighestGrade=arr1[i];
        if(HighestGrade<arr2[i])
            HighestGrade=arr2[i];
        if(HighestGrade<arr3[i])
            HighestGrade=arr3[i];

        if(LowestGrade>arr1[i])
            LowestGrade=arr1[i];
        if(LowestGrade>arr2[i])
            LowestGrade=arr2[i];
        if(LowestGrade>arr3[i])
            LowestGrade=arr3[i];

        Sum=Sum+arr1[i]+arr2[i]+arr3[i];
    }
    average=((float)Sum)/30;
    printf("PassedStudents=%d,  Failed students = %d,   HighestGrade = %d,   LowestGrade=%d,   Average=%f\n",CounterPassed,CounterFailed,HighestGrade,LowestGrade,average);
    return 0;
}