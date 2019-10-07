#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,n,count=1;
  clrscr();
  printf("\nEnter the number of terms in fibonnaci series:\n");
  scanf("%d",&n);
  a=1;
  printf("\n***Fibonnaci series***\n");
  printf("%d\t",a);
  b=1;
  printf("%d\t",b);
  count+=1;
  while(count!=n)
  {
     c=a+b;

     printf("%d\t",c);
     a=b;
     b=c;

     count++;
  }
  getch();
}