//program to check if a given number is prime or not.
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i;clrscr();
   printf("\nEnter a number:");
   scanf("%d",&n);
   for(i=2;i<=n-1;i++)
   {
      if(n%i==0)
	break;
   }
   n==i?printf("\n%d is a prime number",n):printf("\n%d is not a prime number",n);

   getch();
}