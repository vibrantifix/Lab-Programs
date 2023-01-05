import java.io.*;

class Geo_fig {
	public static Double circleArea(double r) {
		return Math.PI * r * r;
	}

	public static Double squareArea(double side) {
		return side * side;
	}

	public static Double rectArea(double width, double height) {
		return width * height;
	}

	 public static Double triArea(double base, double height1) {
		return 0.5 * base * height1;
	}

	public static String readLine() {
		String input = " ";
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		try {
			input = in.readLine();
		}
		catch (Exception e) {
			System.out.println("Error"+ e);
		}
		return input;
	}  

    public static void main(String args[]) {
    	System.out.println(" Enter the Radius");
    	Double radius = Double.parseDouble(readLine());
    	System.out.println("Area of circle = "+ circleArea(radius));

        System.out.println(" Enter the Side");
    	Double side = Double.parseDouble(readLine());
    	System.out.println("Area of side = "+ squareArea(side));

        System.out.println(" Enter the width");
    	Double width = Double.parseDouble(readLine());
    	System.out.println(" Enter the Height");
    	Double height = Double.parseDouble(readLine());
    	System.out.println("Area of Rectangle = " + rectArea(width,height));

        System.out.println(" Enter the Base");
    	Double base = Double.parseDouble(readLine());
    	System.out.println(" Enter the Height1");
    	Double height1 = Double.parseDouble(readLine());
    	System.out.println("Area of Triangle = " + triArea(base,height1));


    }    
    
}