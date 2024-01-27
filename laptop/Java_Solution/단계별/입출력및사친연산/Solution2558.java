package 입출력및사친연산;

import java.util.*;

public class Solution2558 {
	
	public static void main(String[] args) {
		int a, b;
		
		Scanner s = new Scanner(System.in);
		
		a = s.nextInt();
		b = s.nextInt();
		
		Vector<Integer> list = new Vector<Integer>();
		list.add((b%100)%10);
		list.add((b%100)/10);
		list.add((b/100));
		
		Iterator<Integer> itr = list.iterator();
		while(itr.hasNext()) {
			int tmp = itr.next();
			System.out.println(a * tmp);
		}
		System.out.print(a * b);
		
		s.close();
	}
}
