#include<stdio.h>
#include<conio.h>
int main()
{
   int i, originalNum, num, num1, lastDigit, sum;
    long fact;
    printf("Enter any number: ");
    scanf("%d %d", &num,&num1);
    for(int j=num; j<=num1; j++)
    {
    originalNum = j;
    sum = 0;
    while(j > 0)
    {
        lastDigit = j % 10;
        fact = 1;
        for(i=1; i<=lastDigit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;

        j = j / 10;
    }
    }
    if(sum == originalNum)
    {
        printf("%d is STRONG NUMBER", originalNum);
    }

}
