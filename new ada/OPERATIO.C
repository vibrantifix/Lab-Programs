#include<stdio.h>

void main()
{
int count=0,sum=0,n,i,a[50];
clrscr();
count=count+1;
printf("\n Enter the n values:\n");
scanf("%d",&n);
count=count+1;
printf("\n Enter %d values to sum:\n",n);
for(i=0;i<n;i++)
{
count=count+1;
scanf("%d",&a[i]);
}
count=count+1;
for(i=0;i<n;i++)
{
count=count+1;
sum=sum+a[i];
count=count+1;
}
count=count+1;
printf("\n The sum of %d value is %d and count is=%d\n",n,sum,count);
getch();
}
}