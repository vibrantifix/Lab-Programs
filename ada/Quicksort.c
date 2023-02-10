#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <conio.h>
int partition(int a[10],int low,int high);
int quicksort(int a[10], int low, int high)
{
	int j;
	if(low<high)
	{
		j=partition(a,low,high);
		quicksort(a,low,j-1);
		quicksort(a,j+1,high);
	}
}
int partition(int a[10],int low,int high)
{
	int pivot,j,temp,i;
	pivot=low;
	i=low;
	j=high;
	while(i<j)
	{
		while(i<high && a[i]<=a[pivot])
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
			float st,et, time_taken;

	printf("Enter the number of elements in the array : \n");
	st=clock();
	scanf("%d",&n);
	printf("Enter the elements of the array : \n");
	for(i=0;i<n;i++)		
	scanf("%d",&a[i]);
	quicksort(a,0,n=1);
	et=clock();
	time_taken=(((float)(et-st))/CLOCKS_PER_SEC);
	printf("\n The sorted list of elements\n");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("\n The Execution Time is = %0f Milli Seconds",time_taken);
	}


