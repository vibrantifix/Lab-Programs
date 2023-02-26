#include<stdio.h>

int DAC_Max(int a[],int i,int n)
{
int max;
if(i<=n-2)
{
if(a[i]>a[i+1])
return a[i];
else
return a[i+1];
}
max=DAC_Max(a,i+1,n);
if(a[i]>max)
return a[i];
else
return max;
}
int DAC_min(int a[],int i,int n)
{
int min;
if(i>=n-2)
{
if(a[i]<a[i+1])
return a[i];
else
return a[i+1];
}
min=DAC_min(a,i+1,n);
if(a[i]<min)
return a[i];
else
 return min;
 }
 void main()
 {
 int i,n,min,max,a[10];
clrscr();
printf("\n Enter how many elements:\n");
scanf("%d",&n);
printf("Enter the array elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=DAC_Max(a,0,n);
min=DAC_min(a,0,n);
printf("The min number is %d\n",min);
printf("The max number is %d\n",max);
getch();
}