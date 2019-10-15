#include<stdio.h>
#include<math.h>
int main()
{
    int a,r,n;
    float sum=0.0;
    printf("Enter the value of a,r and n: \n");
    scanf("%d %d %d",&a, &r, &n);
    for(int i=1; i<n; i++)
    {
        sum+=(a*(pow(r,n)-1)/(r-1));
    }
    printf("%e",sum);
}
