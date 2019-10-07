//program to check an alphabet is vowel or consonant.
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  clrscr();
  printf("\nEnter an alphabet:");
  scanf("%c",&ch);

  if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
    printf("%c is a vowel",ch);
  else
    printf("%c is a consonant",ch);
  getch();
}