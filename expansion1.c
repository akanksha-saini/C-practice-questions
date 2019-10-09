#include<stdio.h>
#include<math.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
      int s=n*fact(n-1);
      return s;

}
int main()
{
    int x,n;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=2; i<=n; i++)
    {
        sum+=pow(x,i)/fact(i);
    }
    printf("The sum is: %d",(1-sum));
}
