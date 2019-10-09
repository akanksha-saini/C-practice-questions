#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,sum=0;
    printf("Enter the value of num1 and num2: \n");
    scanf("%d %d",&num1,&num2);
    printf("The sum is: ");
    for(int i=num1; i<=num2; i++)
    {
    if(i%2==0)
    {
        if((i%5!=0)&& (i%3==0))
        {
            sum=sum+i;
        }
    }
    }
    printf("%d",sum);
}
