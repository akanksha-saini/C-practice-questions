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
    float x,sum=0.0,sum1=0.0;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1; i<n; i++)
    {
        for(j=1; j<n; j+2)
        {
            if(i%2==0)
                sum+=(-1)*(pow(x,i)/fact(j));
            else
                sum1+=(pow(x,i)/fact(j));
        }
    }
   float sum3=sum+sum1;
   printf("%d",sum3);
}
