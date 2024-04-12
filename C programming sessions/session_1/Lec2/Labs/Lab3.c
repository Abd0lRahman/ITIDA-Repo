#include <stdio.h>
int main(void)
{
    int x;
    printf("Enter the num: ");
    scanf("%d",&x);
    x%2==0?printf("Number is even"):printf("Number is odd");
return 0;
}