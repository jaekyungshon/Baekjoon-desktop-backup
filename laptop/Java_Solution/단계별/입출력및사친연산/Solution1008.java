package 입출력및사친연산;

import java.util.Scanner;

public class Solution1008 {
	static double a, b;
	
	static void prepare(double n1, double n2) {
		a = n1;
		b = n2;
	}
	
	static double Div() {
		return (a/b);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		prepare(s.nextDouble(), s.nextDouble());
		System.out.print(String.format("%.16f", Div()));
	}

}
