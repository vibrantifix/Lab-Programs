class area1
{
static void circle()
{
	int r=2;
	double pi=3.14;
double a=pi*r*r; 
System.out.println(a);
}
}
class area2
{
static void square()
{
	int a=4;
	int area=a*a;
	System.out.println(area);
}
}
class area3
{
static void rectangle()
{
	int l=5,b=3;
	int area=l*b;
	System.out.println(area);
}
}
class multi_area
{
	public static void main(String args[])
	{
		area1 x1=new area1();
		x1.circle();
		area2 x2=new area2();
		x2.square();
		area3 x3=new area3();
		x3.rectangle();
	}

}