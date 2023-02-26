#include<stdio.h>
#include<time.h>
int a[20][20],q[20],visited[20],n,i,j,f=1,r=0;
void bfs(int v)
{
 q[++r]=v;
 visited[v]=1;
 while(f<=r)
 {
  for(i=1;i<=n;i++)
  if(a[v][i]&&!visited[i])
  {
   visited[i]=1;
   q[++r]=i;
  }
  f++;
  v=q[f];
  }
  }
  void main()
  {
  int v;
  float time_taken,st,et;
  clrscr();
  printf("Enter the no of vertices:");
  st=clock();
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  q[i]=0;
  visited[i]=0;
  printf("Enter graph data in matrix form");
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  scanf("%d",&a[i][j]);
  printf("Enter the starting vertex:");
  scanf("%d",&v);
  bfs(v);
  printf(" The node which are reachable are\n");
  for(i=1;i<=n;i++)
  if(visited[i])
  printf("%d\t",q[i]);
  else
  printf("bfs is not possible");
  et=clock();
  {
  time_taken=(((float)(et-st))/CLOCKS_PER_SEC);
  printf("\n The execution time is=%0f millisecond",time_taken);
  getch();
  }
  }
  }