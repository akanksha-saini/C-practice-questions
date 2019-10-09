#include<stdio.h>
#include<conio.h>
#include<math.h>
int myExpo(a,b)
{
    int power=pow(a,b);
    printf("The power is %d",power);
}
int main()
{
    int a,b;
    printf("Enter the value of a and b \n");
    scanf("%d %d",&a,&b);
    myExpo(a,b);
    return 0;
}
