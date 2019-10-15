#include<stdio.h>
decToBinary(int n)
{
    int binaryNum[32];
    int count0=0,count1=0;
    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d",binaryNum[j]);
        if(binaryNum[j]==0)
            count0=count0+1;
        else
            count1=count1+1;
    }

    printf("The number of ones are: %d \n",count1);
    printf("The number of zeros are: %d",count0);
}
int main()
{
    int n=2;
   // printf("Enter the decimal value");
    //scanf("%d",n);
    decToBinary(n);

}
