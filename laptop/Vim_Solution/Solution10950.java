// A+B-3

import java.util.*;

public class Solution10950 {
	static void testAB3(int a, int b){
		System.out.println(a+b);	
	}

	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		int loopCnt = s.nextInt();
		for(int i = 0; i < loopCnt; i++)
			testAB3(s.nextInt(), s.nextInt());
		s.close();
	}
}
