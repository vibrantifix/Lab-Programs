class area1
{
static void circle()
{
	int r=2;
	double pi=3.14;
double a=pi*r*r;
System.out.println(a);
}
static void square()
{
	int a=5;
	int area=a*a;
	System.out.println(area);
}
static void rectangle()
{
	int l=6,b=4;
	int area=l*b;
	System.out.println(area);
}
}
class area
{
	public static void main(String args[])
	{
		area1 x1=new area1();
		x1.circle();
		x1.square();
		x1.rectangle();
	}

}