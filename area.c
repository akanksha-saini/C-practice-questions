#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    printf("Enter 1 for the area of a circle,\n 2 for area of rectangle,\n 3 for area of triangle,\n 4 for wrong choice: \n");
    scanf("%d",&choice);
    int r, l,b,h,b1,rect;
    double circle,tri;
    switch(choice)
    {
    case 1:
        printf("Enter the radius: ");
        scanf("%d",&r);
        circle=(double)3.14*r*r;
        printf("Area of the circle is: %f",circle);
        break;
    case 2:
        printf("Enter the length and breadth:\n");
        scanf("%d %d",&l,&b);
        rect= l*b;
        printf("Area of the rectangle is: %d",rect);
        break;
    case 3:
         printf("Enter the height and base:\n");
        scanf("%d %d",&l,&b1);
        tri=(double) 0.5*h*b1;
        printf("Area of triangle is: %f", tri);
        break;
    default:
        printf("Wrong choice");
    }
}
