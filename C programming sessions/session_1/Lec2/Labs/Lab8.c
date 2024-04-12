#include<stdio.h>
int main(void)
{
    int ID, pass;
    printf("Enter the ID: ");
    scanf("%d",&ID);

    if(ID == 1238)
    {
        printf("Enter the Password: ");
        scanf("%d",&pass);

        if(pass == 120012)
        {
            printf("Welcome Abdelrahman");
        }
        else
            printf("Incorrect passwoed\n");
        }
    else
        printf("Incorrect ID\n");
   
return 0;
}