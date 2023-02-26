#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int binarysearch(int a[],int key,int n,int first,int last)
{
int mid,i,j,temp;

if(last<first)
return -1;

for(i=0;i<=n-2;i++)
{
for(j=0;j<=n-2;j++)
{
if(a[j+1]<a[j])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
while(first<=last)
{
mid=(first+last)/2;
if(key==a[mid])
return mid+1;
else
if(key<a[mid])
last=mid-1;
else
first=mid+1;
}
return -1;
}
void main()
{
char ch;
int a[100],n,key,i,res,first,last;
float time_taken,st,et;
clrscr();

printf("\nEnter the number of elements in the array:\n");
scanf("%d",&n);
st=clock();
printf("\n Enter the elements of the array in:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("\n Enter the key element to search:\n");
scanf("%d",&key);

first=0;
last=n-1;

res=binarysearch(a,key,n,first,last);
printf("the sorted array is:\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);

et=clock();
time_taken=(((float)(et-st))/CLOCKS_PER_SEC);

if(res==-1)
{
printf("\n The search element is not found\n");
printf("\n The Execution Time is= %0f\tmilliseconds",time_taken);
exit(0);
}
else
printf("\n The search element is foundat position %d \n",res);
printf("\n The Execution Time is= %0f\tmilliseconds",time_taken);
getch();
}
