public class addmatrix {
	public static void main(String[] args) {
		int[][] t1 = {{1,2,3},{2,3,4}};
		int[][] t2 = {{3,4,5},{6,7,8}};
		int[][] result;
		result = addmatrixs(t1,t2);
		printMatrix(result);
	}
	static int[][] addmatrixs (int[][] m1, int[][] m2) {
		int[][] result=new int[m1.length] [m1[0].length];

		for (int row=0; row<m1.length; row++) {
			for (int col=0; col<m1[row].length; col++){
				result[row][col] = m1[row][col] + m2[row][col];
			}
		}
		return result;
	}
	static void printMatrix(int[][] printMe) {
		for (int row=0; row<printMe.length; row++) {
			for (int col=0; col<printMe[row].length; col++){
				System.out.print(" "+printMe[row][col]);
	}
	System.out.println();
		}
	}
}