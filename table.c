#include<stdio.h>
#include<conio.h>
int main()
{
    int num,row;
    printf("Enter the value of n: \n");
    scanf("%d",&num);
    printf("Enter the number of rows: \n");
    scanf("%d",&row);
    for(int i=1; i<=row; i++)
    {
        printf("%d x %d = %d \n",num,i,(num*i));
    }
}
