#include<stdio.h>
#include<unistd.h>
typedef enum{
    red,yellow,green
}Colors;

int main(void)
{
    int x=red;
    while(1)
    {
        if(x==red)
        {
            printf("RED\n");
            sleep(2);
            x++; 
        }
        else if(x==yellow)
        {
            printf("YELLOW\n");
            sleep(2);
            x++; 
        }
        else
        {
            printf("GREEN\n");
            sleep(2);
            x=red;
        }            
    }
    return 0;
}