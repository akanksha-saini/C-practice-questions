#include<stdio.h>
#include<conio.h>

void days(int,int,int,int,int,int);
int month(int,int);
int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int main()
  {
  int a1,b1,c1,a2,b2,c2;
  printf("Enter first date(dd mm yyyy) : ");
  scanf("%d%d%d",&a1,&b1,&c1);
  printf("\nEnter second date(dd mm yyyy) : ");
  scanf("%d%d%d",&a2,&b2,&c2);
  if(c2>=c1)
  days(c1,c2,b1,b2,a1,a2);
  else
  days(c2,c1,b2,b1,a2,a1);
  getch();
  }

 void days(int y1,int y2,int m1,int m2,int d1,int d2)
  {
  int count=0,i;
  for(i=y1;i<y2;i++)
    {
    if(i%4==0)
    count+=366;
    else
    count+=365;
    }
  count-=month(m1,y1);
  count-=d1;
  count+=month(m2,y2);
  count+=d2;
  if(count<0)
  count=count*-1;
  printf("The no. of days b/w the 2 dates = %d days",count);
  }

 int month(int a,int yy)
  {
  int x=0,c;
  for(c=0;c<a-1;c++)
    {
   if(c==1)
      {
      if(yy%4==0)
      x+=29;
      else
      x+=28;
      }
    else
    x+=mon[c];
    }
  }
