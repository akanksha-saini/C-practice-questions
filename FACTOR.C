//program to calculate the factors of a given number.
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,facto;
   clrscr();
   printf("\nEnter the number");
   scanf("%d",&n);
   printf("\n**Factors are: ");
   for(i=1;i<=n;i++)
   {
     if(n%i==0)
       printf("%d\t",i);
   }
   getch();
}