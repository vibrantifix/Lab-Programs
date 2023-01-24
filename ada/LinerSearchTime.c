#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <conio.h>
int LINEAR_SEARCH(int a[], int n, int key) 
{ 
	 int  i;
	for (int i = 0; i < n; i++) 
	{
		if (key == a[i]) 
			return i; 
	}
	return -1; 
} 

void main() 
{ 
	char ch;
	int a[100],n,key,i,res; 
	clock_t st,et;
	double time_taken;

		printf("Enter the number of elements in the array : \n");
	scanf("%d",&n);

	printf("Enter the elements of the array : \n");
	for(i=0;i<n;i++)		
		scanf("%d",&a[i]);

	printf("Enter the key of elements to search: \n");
	scanf("%d",&key);

	st=clock();
	res=LINEAR_SEARCH(a,n,key);
	et=clock();
	time_taken=(((double)(et-st))/CLOCKS_PER_SEC)*1000;

	if(res==-1)
	{
		printf("\n The search element is not found\n");
		printf("\n The Execution Time is = %0f Milli Seconds",time_taken);
	}
	else
		printf("\n The search element is found at postion %d\n",res+1);
		printf("\n The Execution Time is = %0f Milli Seconds",time_taken);
}