#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2;
    printf("Enter two digits:\n");
    scanf("%d %d",&n1,&n2);
    if(n1%n2==0)
        printf("%d is a multiple of %d",n1,n2);
    if(n2%n1==0)
        printf("%d is a multiple of %d",n2,n1);
}
