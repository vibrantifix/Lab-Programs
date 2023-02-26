#include<stdio.h>
#include<time.h>

int linearsearch(int a[],int n,int key)
{
int i;
for(i=0;i<n;i++)
{
if(key==a[i])
return i;
}
return -1;
}
void main()
{
char ch;
int a[100],n,key,i,pos;
float time_taken,st,et;
clrscr();
printf("\n Enter the array size:\n");
scanf("%d",&n);
st=clock();
printf("\n Enter the array element:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n Enter the key element:\n");
scanf("%d",&key);
pos=linearsearch(a,n,key);
et=clock();
time_taken=(((float)(et-st))/CLOCKS_PER_SEC);
if(pos==-1)
{
printf("\n array element no found\n");
printf("\n the Execution time is=%0f\tmilliseconds", time_taken);
//exit(0);
}
else
printf("\n array element found position %d",pos+1);
printf("\n the Execution time is=%0f\tmilliseconds", time_taken);
getch();
}