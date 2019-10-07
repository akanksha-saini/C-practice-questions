#include<stdio.h>
#include<conio.h>
void main()
{
  int n1,n2,i=1,minMul,gcd;
  clrscr();
  printf("\nEnter two numbers:");
  scanf("%d%d",&n1,&n2);

   minMul=n1>n2?n1:n2;
  while(1)
  {
    if(minMul%n1==0 && minMul%n2==0)
       break;
    minMul++;
  }
  printf("\nL.C.M of %d,%d is :%d",n1,n2,minMul);

  for( ;i<=n1 && i<=n2;++i)
  {  if(n1%i==0 && n2%i==0)
     {   gcd=i;

     }

  }
   printf("\nH.C.F of %d,%d is :%d",n1,n2,gcd);
  getch();
}