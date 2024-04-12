#include <stdio.h>
int main(void)
{
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,numberr;
    printf("Enter the number 1: ");
    scanf("%d",&num1);
    printf("Enter the number 2: ");
    scanf("%d",&num2);
    printf("Enter the number 3: ");
    scanf("%d",&num3);
    printf("Enter the number 4: ");
    scanf("%d",&num4);
    printf("Enter the number 5: ");
    scanf("%d",&num5);
    printf("Enter the number 6: ");
    scanf("%d",&num6);
    printf("Enter the number 7: ");
    scanf("%d",&num7);
    printf("Enter the number 8: ");
    scanf("%d",&num8);
    printf("Enter the number 9: ");
    scanf("%d",&num9);
    printf("Enter the number 10: ");
    scanf("%d",&num10);
    printf("Enter the value to search: ");
    scanf("%d",&numberr);

    if (numberr == num1)
        printf("value exit at element num 1");
    else if (numberr == num2)
        printf("value exit at element num 2");
    else if (numberr == num3) printf("value exist at element num  3");
    else if (numberr == num4) printf("value exist at element num  4");
    else if (numberr == num5) printf("value exist at element num  5");
    else if (numberr == num6) printf("value exist at element num  6");
    else if (numberr == num7) printf("value exist at element num  7");
    else if (numberr == num8) printf("value exist at element num  8");
    else if (numberr == num9) printf("value exist at element num  9");
    else if (numberr == num10) printf("value exist at element num  10");
    else printf("value isn't found");
    return 0;
}