#include<stdio.h>
int s[50][50];
void display(int m[],int n)
{
register int i,j;
for(i=0;i<n;i++)
s[i][m[i]]=1;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
if(s[i][j])
printf("q\t");
else
printf("x\t");
printf("\n");
}
}
int place(int m[],int k)
{
int i;
for(i=0;i<k;i++)
if(m[i]==m[k]||(abs(m[i])==abs(i-k)))
return 0;
return 1;
}
void main()
{
int m[25],n,k;
clrscr();
printf("\n Enter the no of queens\n");
scanf("%d",&n);
printf("\n the solution to queens problem is\n");
n--;
for(m[0]=0,k=0>=0;m[k]+=1)
{
while(m[k]<=n&&!place(m,k))
m[k]+=1;
if(m[k]<=n)
if(k==n)
display(m,n+1);
else
k++,m[k]=-1;
else
k--;
}
}