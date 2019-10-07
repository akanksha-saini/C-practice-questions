#include<stdio.h>
#include<conio.h>
void main()
{
  int n1,n,fact=1; clrscr();
  printf("\nEnter the number: ");
  scanf("%d",&n);
  n1=n;
  while(n!=0)
  {
    fact=fact*n;
    n--;
  }
  printf("Factorail of %d = %d",n1,fact);
  getch();
}