class sorting
{
public static void main(String args[])
{
int a[]=new int[5];
try
{
for(int i=0;i<5;i++)
a[i]=Integer.parse.Int(args[i]);
System.out.println("\nbefore sorting\n");
for(int i=0;i<5;i++)
System.out.print(" "+a[i]);
bubblesort(a,5);
System.out.println("\n\n after sorting\n");
System.out.println("ascending order\n");
for(int i=0;i<5;i++)
System.out.print(" "+a[i]);
System.out.println("\n\ndescending order\n");
for(int i=4;i>=0;i--)
System.out.print(" "+a[i]);
}
catch(NumberFormatException e)
{
System.out.println("enter only integer");
}
catch(ArrayIndexOutOfBoundException e)
{
System.out.println("enter only 5 integers");
}
}
private static void bubblesort(int[]arr,int length)
{
int temp,i,j;
for(i=0;i<length;i++)
{
for(j=0;j<length-1-i;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
}
}