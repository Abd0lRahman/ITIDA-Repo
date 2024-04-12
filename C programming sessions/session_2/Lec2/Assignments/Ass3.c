#include<stdio.h>

int HeaterActivationTime(int x);

int main (void)
{
    int Temp, HeatingTime;
    printf("enter the Temprature: ");
    scanf("%d",&Temp);
    HeatingTime = HeaterActivationTime(Temp);
    HeatingTime != 0?printf("The required heating time is %d\n",HeatingTime) : printf("Invalid Temprature");
    return 0;
}
int HeaterActivationTime(int x)
{
    int Time=0;
    if (x<=30 && x>0)
        Time = 7;
    else if(x<=60 && x>30)
        Time = 5;
    else if(x<=90 && x>60)
        Time = 3;
    else if(x>90 && x<=100)
        Time = 1;
    else
        Time =0;
    return Time;
}