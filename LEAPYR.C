//program to check a year is leap year or not
#include<stdio.h>
#include<conio.h>
void main()
{
  int year;
  clrscr();
  printf("\nEnter a year:\n");
  scanf("%d",&year);
  year%4==0 ? (year%100==0 && year%400==0 ? printf("\n%d is a leap year",year):printf("%d is not a leap year",year) ):printf("%d is not a leap year",year);
  getch();
}
