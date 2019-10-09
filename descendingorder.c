#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10];
    printf("Enter the values into the array:\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("The array is:\n");
    for(int i=9; i>=0; --i)
    {
       printf("%d\n",a[i]);
    }
}
