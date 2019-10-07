#include<stdio.h>
#include<conio.h>
void main()
{
  int d,n,sum=0;
  clrscr();
  printf("\nEnter a number:");
  scanf("%d",&n);
  while(n!=0)
  {
    d=n%10;
    sum=sum+d;
    n=n/10;

  }
  printf("\nSum of digits:%d\n",sum);
  getch();
}