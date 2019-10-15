#include<stdio.h>
int main()
{
    int n;
    float sum=0.0;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    for(int i=n; i>=1; --i)
    {
        sum+=(1/i);
    }
    printf(" The sum is: %f",sum);
}
