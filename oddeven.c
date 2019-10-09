#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    getch();
    return 0;
}
