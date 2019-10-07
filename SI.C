#include<stdio.h>
#include<conio.h>
void main()
{
  float prin_amt,roi,time;
  clrscr();
  printf("\nenter Principal Amount,Rate of Interest and Time :");
  scanf("%f%f%f",&prin_amt,&roi,&time);

  printf("Simple Interest = %f",(prin_amt*roi*time)/100);
  getch();
}
