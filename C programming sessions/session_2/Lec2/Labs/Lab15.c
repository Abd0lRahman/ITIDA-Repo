#include<stdio.h>

int ADD(int num1,int num2);
int SUB(int num1,int num2);
int MUL(int num1,int num2);
int DIV(int num1,int num2);
int AND(int num1,int num2);
int OR(int num1,int num2);
int XOR(int num1,int num2);
int Reminder(int num1,int num2);
int Not(int num1);
int Increment(int num1);
int Decrement(int num1);

int main (void)
{
    int num2,num1,OpID;
    printf("Please enter the operation ID: ");
    scanf("%d",&OpID);

    if(OpID == 7 || OpID == 10 || OpID == 11)
    {
        printf("Please enter the number: ");
        scanf("%d",&num1);
        switch(OpID)
        {
            case (7): printf("The Not operation equal: %d",Not(num1)); break;
            case (10): printf("The Increment operation equal: %d",Increment(num1)); break;
            case (11): printf("The Decrement equal: %d",Decrement(num1)); break;
        }
    }

    else 
    {
        printf("Please enter the first number: ");
        scanf("%d",&num1);
        printf("Please enter the second number: ");
        scanf("%d",&num2);
        switch(OpID)
        {
            case (1): printf("The Sum equal: %d",ADD(num1,num2)); break;
            case (2): printf("The Sub equal: %d",SUB(num1,num2)); break;
            case (3): printf("The Multiplication equal: %d",MUL(num1,num2)); break;
            case (4): printf("The Div equal: %d",DIV(num1,num2)); break;
            case (5): printf("The AND equal: %d",AND(num1,num2)); break;
            case (6): printf("The OR equal: %d",OR(num1,num2)); break;
            case (8): printf("The XOR equal: %d",XOR(num1,num2)); break;
            case (9): printf("The Reminder equal: %d",Reminder(num1,num2)); break;
            default: printf("Wrong operation ID \n");break;
        }
    }
   return 0;
}


int Not(int num1)
{
    return !num1;
}
int Increment(int num1)
{
    return ++num1;
}
int Decrement(int num1)
{
    return --num1;
}
int MUL(int num1,int num2)
{
    return num1*num2;
}
int DIV(int num1,int num2)
{
    return num1/num2;
}
int AND(int num1,int num2)
{
    return num1&num2;
}
int OR(int num1,int num2)
{
    return num1|num2;
}
int XOR(int num1,int num2)
{
    return num1^num2;
}
int Reminder(int num1,int num2)
{
    return num1%num2;
}
int ADD(int num1,int num2)
{
    return num1+num2;
}
int SUB(int num1,int num2)
{
    return num1-num2;
}