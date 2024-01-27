// 구구단

import java.util.*;

public class Solution2739{
	static void GuGuDan(int n){
		for(int i = 1; i < 10; i++){
			System.out.print(n);
			System.out.print(" * ");
			System.out.print(i);
			System.out.print(" = ");
			System.out.println(n*i);
		}		
	}

	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		GuGuDan(n);
		s.close();
	}
}
