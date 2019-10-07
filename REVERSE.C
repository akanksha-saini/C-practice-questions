#include<stdio.h>
#include<conio.h>
void main()
{
  int d,n,rev=0;
  clrscr();
  printf("\nEnter a number:");
  scanf("%d",&n);
  while(n!=0)
  {
    d=n%10;
    rev=(rev*10)+d;
    n=n/10;

  }
  printf("\nreverse of number:%d\n",rev);
  getch();
 }