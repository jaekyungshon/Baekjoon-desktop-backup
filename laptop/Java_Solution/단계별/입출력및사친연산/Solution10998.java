package 입출력및사친연산;

import java.util.*;

class GroupAB {
	private int a, b;
	
	GroupAB(int a, int b){
		this.a = a;
		this.b = b;
	}
	
	public int Multi() {
		return (a*b);
	}
}

public class Solution10998 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		GroupAB g = new GroupAB(s.nextInt(), s.nextInt());
		System.out.print(g.Multi());
		s.close();
	}

}
