#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int Math;
    int Physics;
    int Chemistry;
    int Language;
}Subjects;

int main(void)
{
    Subjects arr[10];
    int ID;

    for(int i=0;i<10;i++)
    {
        arr[i].Math=rand()%100;
        arr[i].Physics=rand()%100;
        arr[i].Chemistry=rand()%100;
        arr[i].Language=rand()%100;
    }

    printf("Please enter the Student ID (1-10): ");
    scanf("%d",&ID);

    (ID<=10 && ID>0)? printf("Math = %d, Physics =%d, Chemistry=%d ,  Language=%d",arr[ID-1].Math,arr[ID-1].Physics,arr[ID-1].Chemistry,arr[ID-1].Language) : printf("Wrong ID");
    return 0;
}