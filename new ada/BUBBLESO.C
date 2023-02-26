#include<stdio.h>
#include<time.h>
void bubblesort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
  {
   for(j=0;j<n-i-1;j++)
   {
     if(a[j+1]<a[j])
     {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
      }
   }
}
}
void main()
{
 int a[10],n,i;
 float time_taken,st,et;
 clrscr();
 printf("Enter the number of elements:\n");
 st=clock();
 scanf("%d",&n);
 printf("Enter the elments:\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 bubblesort(a,n);
 et=clock();
 time_taken=(((float)(et-st))/CLOCKS_PER_SEC);
 printf("The Execution time is=%0f\t milliseconds\n",time_taken);
 printf("array after sorting\n");
 for(i=0;i<n;i++)
 printf("%d",a[i]);
 getch();
 }

