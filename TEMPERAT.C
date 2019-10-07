#include<stdio.h>
#include<conio.h>
void main()
{
  float t,conv;
  int ch;clrscr();
  printf("\nEnter the temperature:");
  scanf("%f",&t);

  printf("***Conversion***\n1.celsius to farenheit\t2.farenheit to celsius\n");
  printf("Enter your choice(1-2)");
  scanf("%d",&ch);

  switch(ch)
  {

    case 1:conv = (1.8 * t) + 32;
	    printf("\n%f degree celsius  = %f degree farenheit",t,conv);
	    break;
    case 2:
	     conv = (t-32) * (5.0/9.0);
	   printf("\n%f degree farenheit = %f degree celsius",t,conv);
	   break;
   default: printf("Wrong choice entered");
  }
  getch();
}