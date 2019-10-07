#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,ch,res=0;
  clrscr();
  printf("\n***MENU***\n");
  printf("1.Addtion\t2.Subtraction\t3.Multiplication\t4.Division\n");
  printf("Enter your choice(1-4)\n");
  scanf("%d",&ch);
  printf("\nEnter two numbers:\n");
  scanf("%d%d",&a,&b);
  switch(ch)
  {
    case 1:    res=a+b;
	       printf("\nAddition : %d",res);
	       break;

     case 2:    res=a-b;
	       printf("\nSubtraction : %d",res);
	       break;
     case 3:    res=a*b;
	       printf("\nMultiplication : %d",res);
	       break;
     case 4:    res=a/b;
	       printf("\nDivision : %d",res);
	       break;
     default: printf("Wrong Choice entered");
    }
  getch();
}