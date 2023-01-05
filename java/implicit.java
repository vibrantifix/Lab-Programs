public class implicit
{
	public static void main (String args[])
	{
		byte b=10;
		short s=100;
		int i=1000;
		long l=10000;
		float f =3.14f;
		double d=6.28;
		char ch='A';
		s=b;
		System.out.println("byte=" + b +"short=" + s);
		i=s;
		System.out.println("short=" + s + "int=" + i);
		l=i;
		System.out.println("int=" + i + "long=" + l);
		f=l;  
		System.out.println("long=" + l + "float=" + f);
		d=f;
		System.out.println("float=" + f + "double=" + d);
		i=ch;
		System.out.println("char=" + ch + "int=" + i);
	}
}
