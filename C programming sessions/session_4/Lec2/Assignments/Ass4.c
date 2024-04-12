#include<stdio.h>

typedef union{
    char first_name[30];
    char Last_name[30];
}family_name;

int main(void)
{
    family_name Member1 = {"abdelrahman"};
    printf("Second Name is -> %s\n",Member1.Last_name);
    printf("Size of the union is %d bytes",(int)sizeof(Member1));
    return 0;
}