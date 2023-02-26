#include<stdio.h>
#include<time.h>
int a[20][20],reach[20],n;
void dfs(int v)
{
int i;
reach[v]=1;
for(i=1;i<=n;i++)
if(a[v][i]&&!reach[i])
{
printf("%d->%d\n",v,i);
dfs(i);
}
}
void main()
{
int i,j,count=0;
float time_taken,st,et;
clrscr();
printf("\nEnter number of vertices:\n");
st=clock();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
reach[i]=0;
for(j=1;j<=n;j++)
a[i][j]=0;
}
printf("\n Enter the adjacent matrix:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
dfs(1);
printf("\n");
for(i=1;i<=n;i++)
{
if(reach[i])
count++;
}
if(count==n)
printf("graph is not connected");
et=clock();
{
time_taken=(((float)(et-st))/CLOCKS_PER_SEC);
printf("The Execution time is=%0f iliseconds",time_taken);
getch();
}
}
