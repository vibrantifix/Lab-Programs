#include<stdio.h>
#include<time.h>
void quicksort(int a[10],int low,int high)
{
int j;
if(low<high)
{
j=parition(a,low,high);
quicksort(a,low,j-1);
quicksort(a,j+1,high);
}
}
int parition(int a[10],int low,int high)
{
int pivot,j,temp,i;
pivot=low;
i=low;
j=high;
while(i<j)
{
while(i<high&&a[i]<=a[pivot])
i++;
while(a[j]>a[pivot])
j--;
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[pivot];
a[pivot]=a[j];
a[j]=temp;
return j;
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
quicksort(a,0,n-1);
time_taken=(((float)(et-st))/CLOCKS_PER_SEC);
printf("Sorted list of elements\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n The Execution time is=%0f\t milliseconds",time_taken);
getch();
}
