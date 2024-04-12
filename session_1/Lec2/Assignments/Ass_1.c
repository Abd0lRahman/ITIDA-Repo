#include<stdio.h>
int main (void)
{
    int CostPr,SellingPr;
    printf("Please enter the Cost price: ");
    scanf("%d",&CostPr);
    printf("Please enter the selling price: ");
    scanf("%d",&SellingPr);
    SellingPr-CostPr>0?printf("Profit = %d",SellingPr-CostPr ):printf("Loss = %d",-SellingPr+CostPr );
    return 0;
}