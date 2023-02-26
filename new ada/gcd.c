#include<stdio.h>
int Euclid(int a,int b)
 {
  while(a!=b)
  {
   if(a>b)
   {
    a=a-b;
   }
    else
    {
     b=b-a;
    }
    }
    return a;
  }
  void main()
  {
   int a=30;
   int b=50;
   clrscr();
   printf("Euclid(%d,%d)=%d",a,b,Euclid(a,b));
   getch();
  }
