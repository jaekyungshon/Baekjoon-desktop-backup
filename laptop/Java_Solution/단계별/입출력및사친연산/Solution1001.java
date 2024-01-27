package 입출력및사친연산;

import java.util.*;

class NumAB {
	private int a, b;
	
	NumAB(int a, int b) {
		this.a = a;
		this.b = b;
	}
	
	public int Minus() {
		return (a-b);
	}
}

public class Solution1001 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		NumAB g = new NumAB(s.nextInt(), s.nextInt());
		System.out.print(g.Minus());
		s.close();
	}

}
