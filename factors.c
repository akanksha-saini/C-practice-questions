#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    printf("The factors are: \n");
    for(int i=1; i<=n; ++i)
    {
        if(n%i==0)
        {
            printf("%d",i);
            printf("\n");
        }
    }
    return(0);
}
