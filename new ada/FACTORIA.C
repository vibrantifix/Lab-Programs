#include<stdio.h>
#include<time.h>

void main()
{
long num,fact=1;
int i;
float time_taken,st,et;
clrscr();
printf("\n Factorial of a number\n");
st=clock();
printf("\n enter the number <15\n");
scanf("%ld",&num);
for(i=1;i<=num;i++)
{
fact=fact*i;
}
et=clock();
time_taken=(((float)(et-st))/CLOCKS_PER_SEC);
printf("\n Factorial of%ld:%ld\n",num,fact);
printf("\n The Exceution time is=%0f milliseconds",time_taken);
getch();
}

