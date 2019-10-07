#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,res;
  clrscr();
  printf("\nEnter the number:");
  scanf("%d",&n);
  printf("\n**Table of %d**",n);

  for(i=1;i<=10;i++)
  {  res = n*i;
     printf("\n%d * %d = %d\n",n,i,res);
  }
  getch();
}