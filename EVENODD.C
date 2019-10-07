#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();
  printf("\nEnter a number");
  scanf("%d",&n);

  n%2==0?printf("Even number"):printf("Odd number");;
  getch();
}
