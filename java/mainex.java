class object_arithmetic
{
	static void add()
	{
		int a=10,b=20;
		int c=a+b;
		System.out.println(c);
	}
	static void sub()
	{
		int a=50,b=20;
		int c=a-b;
		System.out.println(c);
	}
	static void mul()
	{
		int a=10,b=20;
		int c=a*b;
		System.out.println(c);
	}
}
class mainex{
	public static void main(String[] args) {
		object_arithmetic a1=new object_arithmetic();
		a1.add();
		a1.sub();
		a1.mul();
	}
}