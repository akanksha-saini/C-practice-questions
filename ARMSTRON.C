//program to check if a given number is armstrong or not.
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,a,b,c;
   clrscr();
   printf("\nEnter the number");
   scanf("%d",&n);
   a=n%10;
   b=n%100;
   b=(b-a)/10;
   c=n/100;
   a*a*a + b*b*b + c*c*c == n ? printf("\n%d is an armstrong number",n):printf("\n%d is not an armstrong number",n);
   getch();
}