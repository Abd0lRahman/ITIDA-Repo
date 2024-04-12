#include <stdio.h>
int main(void)
{
    int x;
    printf("please enter the ID: ");
    scanf("%d",&x);
    switch(x)
    {
        case(1234): printf("Ahmed"); break;
        case(5678): printf("Youssef"); break;
        case(1145): printf("Mina"); break;
        default : printf("Wrong ID"); break;
    }
    return 0;
}