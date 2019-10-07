#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
  float a,b,c,d,r1,r2,r3;
  clrscr();
  printf("\nEnter a,b,c in a quadratic equation:");
  scanf("%f%f%f",&a,&b,&c);
  d = (b*b)-4*a*c;
  printf("\nD=%f",d);
  if(d==0)
  {
    printf("\nQuadratic Equation have Real and Equal Roots\n");
    r1=-b/(2*a);
    r2=r1;
    printf("Roots  : %f,%f",r1,r2);
  }
  else if(d>0)
  {
    printf("\nQuadratic Equation have Real and Unequal Roots\n");

    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("Roots  : %f,%f",r1,r2);
  }
  else
  {  printf("\nQuadratic Equation have Imaginary and Unequal Roots\n");
    d=abs(d);
    r1=-b/(2*a);
    r2=-sqrt(d)/(2*a);
    r3=sqrt(d)/(2*a);
    printf("Roots : %f,%fi,%fi " ,r1,r2,r3);
  }
  getch();
}