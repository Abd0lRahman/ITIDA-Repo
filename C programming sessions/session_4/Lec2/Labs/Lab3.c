#include<stdio.h>

struct employees{
    int salary;
    int bouns;
    int deductions;
};

int main(void)
{
    struct employees Ahmed,Amr,Waleed;

    printf("please enter Ahmed salary: ");
    scanf("%d",&Ahmed.salary);
    printf("please enter Ahmed bouns: ");
    scanf("%d",&Ahmed.bouns);
    printf("please enter Ahmed deductions: ");
    scanf("%d",&Ahmed.deductions);

    printf("please enter Amr salary: ");
    scanf("%d",&Amr.salary);
    printf("please enter Amr bouns: ");
    scanf("%d",&Amr.bouns);
    printf("please enter Amr deductions: ");
    scanf("%d",&Amr.deductions);
    
    printf("please enter Waleed salary: ");
    scanf("%d",&Waleed.salary);
    printf("please enter Waleed bouns: ");
    scanf("%d",&Waleed.bouns);
    printf("please enter Waleed deductions: ");
    scanf("%d",&Waleed.deductions);

    printf("Total value needed is: %d",Ahmed.salary+Amr.salary+Waleed.salary+Ahmed.bouns+Amr.bouns+Waleed.bouns-Ahmed.deductions-Amr.deductions-Waleed.deductions);
    return 0;
}