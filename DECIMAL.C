#include<stdio.h>
#include<conio.h>
void main()
{
  int dec=0,a,i=0,bin[20],j,n,base=1;int ch;
  clrscr();
  printf("\n***CONVERSION***\n");
  printf("1.Decimal to Binary\t2.Binary to Decimal\n");
  printf("\nEnter your choice :");
  scanf("%d",&ch);
  if(ch==1)
  {
    printf("\nEnter a decimal number\n");
    scanf("%d",&dec);
     printf("\nBinary equivalent of decimal number is ");

    while(dec!=0)
    {
       bin[i]=dec%2;

       dec=dec/2;
       i++;

    }

    for(j=i-1;j>=0;j--)
       printf("%d",bin[j]);
   }

  if(ch==2)
  {
     printf("\nEnter a binary number\n");
    scanf("%d",&n);
	printf("Decimal equivalent is");
    while(n!=0)
    {
      a=n%10;
      n=n/10;
     dec=dec + a * base;

     base=base *2;
   } printf(" %d ",dec);

  }
  getch();
}