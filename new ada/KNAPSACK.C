#include<stdio.h>
int i,j,n,capacity,w[50],p[50],maxprofit;

int maximum(int x,int y)
{
if(x>y)
return x;
else
return y;
}
knapsack(int i,int c)
{
if(i==n)
return((c<w[n])?0:p[n]);

if(c<w[i])
return knapsack(i+1,c);
return maximum(knapsack(i+1,c),knapsack(i+1,c-w[i])+p[i]);
}
void main()
{
clrscr();
printf("\n enter the no of objects:");
scanf("%d",&n);

printf("\n Enter the weights:\n");
for(i=0;i<n;i++)
scanf("%d",&w[i]);

printf("\n Enter the profit associated:\n");
for(i=0;i<n;i++)
scanf("%d",&p[i]);

printf("\n Enter the capacity:\n");
scanf("%d",&capacity);
maxprofit=knapsack(0,capacity);
printf("\n Maximum profit= %d",maxprofit);
getch();
}
