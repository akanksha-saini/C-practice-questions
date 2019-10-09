#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int a)
{
    return(a*fact(a-1));
}

int main()
{
    int i,n,j;
    float sum=0.0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum+=1/fact(i);
    }
   printf("%f",sum);
}
