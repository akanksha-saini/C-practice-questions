#include<stdio.h>
#include<conio.h>
int main()
{
    int sp,cp,profit,loss;
    printf("Please enter the selling price of the item: ");
    scanf("%d",&sp);
    printf("Please enter the cost price of the item: ");
    scanf("%d",&cp);
    profit=sp-cp;
    if(profit>0)
    {
        printf("You have profit of %d:",profit);
    }
    else if(profit==0)
    {
        printf("You have neither incurred loss nor profit");
    }
    else
        printf("You have incurred a loss");

}
