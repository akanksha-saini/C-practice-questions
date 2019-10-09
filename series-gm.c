#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int i,n,a,r;
    float sum=0.0;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=(a*pow(r,(n-1)));
    }
   printf("%f",sum);
}
