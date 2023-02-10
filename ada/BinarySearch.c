#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <conio.h>
int Binary_Search(int a[], int key, int n, int first, int last) 
{ 
	 int  mid,i,j,temp;
	 if(last < first)
	 	return -1;
	for (int i=0; i<=n-1; i++) 
	{
		for (int j=0; j<=n-i-1; j++)
		{ 
			if (a[j+1]<a[j])
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
			return mid;
		else if (key<a[mid])
			last=mid-1;
		else
			first=mid+1;
	} 
	return-1;
} 
void main()
{
	char ch;
	int a[100],n,key,i,res,first,last;
	clock_t st,et;
	double time_taken;

	printf("Enter the number of elements in the array : \n");
	scanf("%d",&n);

	printf("Enter the elements of the array : \n");
	for(i=0;i<n;i++)		
		scanf("%d",&a[i]);

	printf("Enter the key of elements to search: \n");
	scanf("%d",&key);

	first=0;
	last=n-1;
	st=clock();
	res=Binary_Search(a,n,key,first,last);
	printf("The sorted array is :");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	et=clock();
	time_taken=(((double)(et-st))/CLOCKS_PER_SEC)*1000;
	if(res==-1)
	{
		printf("\n The search element is not found\n");
		printf("\n The Execution Time is = %0f Milli Seconds",time_taken);
		exit(0);
	}
	else
		printf("\n The search element is found at postion %d\n",res);
		printf("\n The Execution Time is = %0f Milli Seconds",time_taken);
}

