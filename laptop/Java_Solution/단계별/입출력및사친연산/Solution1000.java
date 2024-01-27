package 입출력및사친연산;

import java.util.*;

class InputAB {
	private int a, b;
	
	InputAB(int a, int b){
		this.a = a;
		this.b = b;
	}
	
	public int Plus() {
		return (a+b);
	}
}

public class Solution1000{
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		InputAB c = new InputAB(s.nextInt(), s.nextInt());
		System.out.println(c.Plus());
		s.close();
	}

}
