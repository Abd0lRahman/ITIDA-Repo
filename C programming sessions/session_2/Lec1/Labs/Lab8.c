#include<stdio.h>
int main(void)
{
    int ID, pass;
    printf("Enter the ID: ");
    scanf("%d",&ID);

    if(ID == 1234)
    {
        for(int i=0;i<3;i++)
        {
            printf("Enter the Password: ");
            scanf("%d",&pass);
            if(pass == 7788)
            {
                printf("Welcome Ahmed\n");
                break;
            }
            else
                printf("Incorrect Password....Please try again\n");
            if (i==2)
            {
                printf("No more tries");
                break;
            }
                
        }
    }
    else if(ID == 9870)
    {
        for(int i=0;i<3;i++)
        {
            printf("Enter the Password: ");
            scanf("%d",&pass);
            if(pass == 1122)
            {
                printf("Welcome Wael\n");
                break;
            }
            else
                printf("Incorrect Password....Please try again\n");
            if (i==2)
            {
                printf("No more tries");
                break;
            }
                
        }
    }
    else if(ID == 5678)
    {
        for(int i=0;i<3;i++)
        {
            printf("Enter the Password: ");
            scanf("%d",&pass);
            if(pass == 5566)
            {
                printf("Welcome Amr\n");
                break;
            }
            else
                printf("Incorrect Password....Please try again\n");
            if (i==2)
            {
                printf("No more tries");
                break;
            }
                
        }
    }
    else
        printf("You are not registered\n");
   
return 0;
}