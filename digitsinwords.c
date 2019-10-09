#include<stdio.h>
#include<conio.h>
int main()
{
    int num,r,sum=0;
    printf("Enter the number: \n");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    num=sum;
    while(num>0)
    {
        r=num%10;
        switch(r)
        {
        case 1:
            printf("One \n");
            break;
        case 2:
            printf("Two \n");
            break;
        case 3:
            printf("Three \n");
            break;
        case 4:
            printf("Four \n");
            break;
        case 5:
            printf("Five \n");
            break;
        case 6:
            printf("Six \n");
            break;
        case 7:
            printf("Seven \n");
            break;
        case 8:
            printf("Eight \n");
            break;
        case 9:
            printf("Nine \n");
            break;
        default:
            printf("Zero \n");
        }
        num=num/10;
    }
}
