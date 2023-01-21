/* Shortest path using dijikstras algorithm */ 
#include<stdio.h>
#include<conio.h>
void Dijikstra(int n,int v, int cost[10][10], int dist[])
{
int count,u,i,w,flag[10],min;
for(i=1;i<=n;i++)
{
flag[i]=0;
dist[i]=cost[v][i];
}
flag[v]=1;
dist[v]=1; 
count=2;

while(count<=n)
{
min=9999;
for(w=1; w<=n; w++)
if(dist[w] <min && !flag[w]) 
	min=dist[w], u=w;
flag[u]=1;
count++;

for(w=1; w<=n; w++)
if((dist[u]+cost[u][w] < dist[w]) && !flag[w]) 
	dist[w] = dist[u]+ cost[u][w];
	}
}
void main()
{
int n,v,cost[10][10],dist[10],i,j;
printf("\n Enter the no of nodes:"); 
scanf("%d",&n);
printf("\n Enter the cost matrix : \n");
for(i=1; i<=n;i++)
	for(j=1; j<=n; j++)
{
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=9999;
}
printf("Enter the source vertex");
scanf("%d",&v);
Dijikstra(n,v,cost,dist);
printf("Shortest path from \n");
for(j=1;j<=n;j++)
	if(j!=v)
		printf("\n%d->%d=%d",v,j,dist[j]);
	getch();
}