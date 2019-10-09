#include<stdio.h>
#include<conio.h>

void main()
{
printf("Truth Table \n");
printf("X \t Y \t Z \t \t XY+Z \n \n");

    for(int i = 0 ; i<=1 ; i++)
        for(int j = 0; j<=1; j++)
            for(int k = 0; k<=1; k++)
            {
                printf("%d \t %d \t %d \t \t",i,j,k);

                if( (i == 1 && j == 1) || k == 1)
                    printf("0");
                else
                    printf("1");
                    printf("\n");
            }

}
