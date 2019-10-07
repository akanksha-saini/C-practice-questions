#include<stdio.h>
#include<conio.h>
void main()
{
  int x,y,d,r,h,k;
  clrscr();
  printf("\nEnter the x,y coordinates of point:");
  scanf("%d%d",&x,&y);
  printf("\nEnter radius:");
  scanf("%d",&r);
  printf("\nEnter the h,k coordinates(centre of circle)");
  scanf("%d%d",&h,&k);
  d=pow(x-h,2)+pow(y-k,2);
  if(d==r*r)
    printf("\npoint lies on the circle");

  else if(d<r*r)
      printf("\npoint lies inside the circle");
  else
    printf("\npoint lies outside the circle");
  getch();
}
