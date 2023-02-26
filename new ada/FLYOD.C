#include<stdio.h>
#include<time.h>
#include<conio.h>
int c[5][5],n,j,i,k;
void flyod()
{
for(k=1;k<=n;k++)
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if((c[i][k]+c[k][j])<c[i][j])
c[i][j]=c[i][k]+c[k][j];
}
void main()
{
float time_taken,st,et;
clrscr();
printf("enter no of vertices:\n");
st=clock();
scanf("%d",&n);
printf("Enter the adjancet matrix:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
scanf("%d",&c[i][j]);
if(c[i][j]==0)
c[i][j]=999;
}
flyod();
for(i=1;i<=n;i++)
c[i][i]=0;
printf("The all pair shortest path:\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
printf("%6d",c[i][j]);
printf("\n");
}
et=clock();
{
time_taken=(((float)(et-st))/CLOCKS_PER_SEC);
printf(" The execution time is=%0f milliseconds\n",time_taken);
getch();
}
}

