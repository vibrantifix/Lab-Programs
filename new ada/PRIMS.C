#include<stdio.h>
int a,b,u,v,n,i,j,no_of_edges=1;
int visited[10],min,mincost=0,cost[10][10];
void main()
{
clrscr();
printf("\n Enter the no of vertices:");
scanf("%d",&n);
printf("\n Enter the adjacency matrix:");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=999;
}
for(i=2;i<n;i++)
visited[i]=0;
printf("\n the edges of spanning tree are:\n");
visited[1]=1;
while(no_of_edges<n)
{
for(i=1,min=999;i<=n;i++)
for(j=1;j<=n;j++)
if(cost[i][j]<min)
if(visited[i]==0)
continue;
else
{
min=cost[i][j];
a=u=i;
b=v=j;
}
if(visited[u]==0||visited[v]==0)
{
printf("\n%d\tedge\t(%d,%d)=%d",no_of_edges,a,b,min);
mincost+=min;
visited[b]=1;
no_of_edges++;
}
cost[a][b]=cost[b][a]=999;
}
printf("\n\tminimum cost=%d\n",mincost);
getch();
}