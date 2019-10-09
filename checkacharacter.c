#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c>=65 && c<=90)
        printf("The character is an upper case letter");
    else if(c>=97 && c<=122)
        printf("The character is a lower case letter");
    else if(c>=48&&c<=57)
        printf("The character is a digit");
    else
        printf("The character is a special case letter");
}
