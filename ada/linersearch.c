#include <stdio.h> 
#include <conio.h>
int LINEAR_SEARCH(int a[], int n, int val) 
{ 
	 int  i;
	for (int i = 0; i < n; i++) 
	{
		if (a[i] == val) 
			return i+1; 
	}
	return -1; 
} 

int main(void) 
{ 
	int i;
	int a[] = { 70, 40, 30, 11, 57, 41, 25, 41, 52 }; 
	int val = 41; 
	int n = sizeof(a) / sizeof(a[0]); 
	int res = LINEAR_SEARCH(a, n, val); 
	printf("The Element of array are :");
	for(i=0;i<n;i++)
		printf("%d\n",a[i] );
	printf("\n the element to be searched is %d",val );
	if(res==-1)
    printf("\n The element is not found");
    else
    	printf("\n The element is present at %d position of array",res);
	return 0; 
}