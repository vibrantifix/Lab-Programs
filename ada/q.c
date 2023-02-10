#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
void quicksort(int number[25],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j)
      {
         while(number[i]<=number[pivot]&&i<last)
         i++;
         while(number[j]>number[pivot])
         j--;
         if(i<j)
         {
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
   }
}
void main(){
   int i, count, number[25];
   float st,et, time_taken;
   printf("How many elements are u going to enter?: ");
   st=clock();
   scanf("%d",&count);
   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
   scanf("%d",&number[i]);
   quicksort(number,0,count-1);
   et=clock();
   time_taken=(((float)(et-st))/CLOCKS_PER_SEC);
   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
   printf(" %d",number[i]);
   printf("\n The Execution Time is = %0f Milli Seconds",time_taken);
}