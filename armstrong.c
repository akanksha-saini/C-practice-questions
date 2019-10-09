#include<stdio.h>
#include<conio.h>
int main()
{
   int num,num1,sum=0,rem;

   printf("\nEnter a number:");
   scanf("%d",&num);
   num1 = num;
   while (num != 0)
   {
      rem = num % 10;
      sum = sum + (rem*rem*rem);
      num = num / 10;
   }
   if(num1 == sum)
      printf("\n%d is an Armstrong Number",num1);
   else
      printf("\n%d is not an Armstrong Number",num1);
   return(0);
}
