#include<stdio.h>
#include<time.h>
void Merge(int a[10],int low,int mid,int high)
{
int i,j,k,c[10];
i=low;
k=low;
j=mid+1;
while((i<=mid)&&(j<=high))
{
if(a[i]<=a[j])
{
c[k]=a[i];
i++;
k++;
}
else
{
c[k]=a[j];
j++;
k++;
}
}
while(i<=mid)
{
c[k]=a[i];
k++;
i++;
}
for(i=low;i<=k-1;i++)
a[i]=c[i];
}
void MergeSort(int a[10],int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
MergeSort(a,low,mid);
MergeSort(a,mid+1,high);
Merge(a,low,mid,high);
}
}
void main()
{
int i,n,a[10];
float time_taken,st,et;
clrscr();
printf("\n Enter the number of elments of Array:\n");
scanf("%d",&n);
st=clock();
printf("\n Enter the elements of Array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
MergeSort(a,0,n-1);
time_taken=(((float)(et-st))/CLOCKS_PER_SEC);
printf("Sorted list of elements\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n The Execution time is=%0f\t milliseconds",time_taken);
getch();
}


