package 입출력및사친연산;

import java.util.*;

public class Solution10430 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int A = s.nextInt();
		int B = s.nextInt();
		int C = s.nextInt();
		System.out.println(Integer.toString((A+B)%C));
		System.out.println(Integer.toString(((A%C) + (B%C))%C));
		System.out.println(Integer.toString((A*B)%C));
		System.out.println(Integer.toString(((A%C) * (B%C))%C));
		s.close();
	}

}
