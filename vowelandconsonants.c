#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Enter a character: \n");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf("Its a vowel");
    }
    else
        printf("Its a consonant");
}
