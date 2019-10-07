#include<stdio.h>
#include<conio.h>
void main()
{
  float h,cm,inch,ft;
  int ch;clrscr();
  printf("\nEnter the height:");
  scanf("%f",&h);

  printf("***Conversion***\n1.cm to feet\t2.feet to cm\n");
  printf("Enter your choice(1-2)");
  scanf("%d",&ch);

  switch(ch)
  {
    case 1: cm=h;
	    inch=cm/2.54;
	    ft = inch/12;
	    printf("\n%f cm  = %f feet",cm,ft);
	    break;
    case 2:
	   ft=h;
	   inch=ft*12;
	   cm=inch*2.54;
	   printf("\n%f feet = %f cm",ft,cm);
	   break;
   default: printf("Wrong choice entered");
  }
  getch();
}