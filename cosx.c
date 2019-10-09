#include<stdio.h>
#include<conio.h>

void main()
{
    int i, n;
    float x, sum=1, t=1;
    printf(" Enter the value for x : ");
    scanf("%f",&x);
    printf(" Enter the value for n : ");
    scanf("%d",&n);
    x=x*3.14/180;
    for(i=1;i<=n;i++)
    {
        t=t*(-1)*x*x/(2*i*(2*i-1));
        sum=sum+t;
    }
    printf(" The value of is : %f", x, sum);
}
