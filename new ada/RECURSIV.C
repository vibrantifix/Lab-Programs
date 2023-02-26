#include<stdio.h>
#include<time.h>
int Rbinarysearch(int a[],int key,int n,int first,int last)
{
int mid,i,j,temp;
if(last<first)
return -1;
for(i=0;i<=n-2;i++)
{
for(j=0;j<=n-i-2;j++)
{
if(a[j+1]<a[j])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
mid=(first+last)/2;
if(key==a[mid])
return mid;
else if(key<a[mid])
return Rbinarysearch(a,key,n,first,mid-1);
else
return Rbinarysearch(a,key,n,mid+1,last);
}
void main()
{
char ch;
int a[100],n,key,i,res,first,last;
float time_taken;
float st,et;
clrscr();
printf("\n Enter the numbers of elements in the Array:\n");
scanf("%d",&n);
st=clock();
printf("\n Enter the elements in the Array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n Enter the key elements of the Array:\n");
scanf("%d",&key);
first=0;
last=n-1;
res=Rbinarysearch(a,key,n,first,last);
printf("\n the sorted Array is:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
et=clock();
time_taken=(((float)(et-st))/CLOCKS_PER_SEC);
if(res==-1)
{
printf("\n The search elements is not found\n");
printf("The Execution time is=%0f\tMilliSecond\n",time_taken);
}
else
printf("\n The search elements is found at%d\n",res+1);
printf("\nThe Execution time is=%0f\tMilliSecond\n",time_taken);
getch();
}