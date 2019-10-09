#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,i=0,flag=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    int a=sqrt(n);
    for(i=2; i<=a; i++)
    {
        if(a%i==0)
        {
            flag=1;
        }
    }
    if(flag==1)
        printf("Prime number");
    else
        printf("Not Prime");
    return 0;
}
