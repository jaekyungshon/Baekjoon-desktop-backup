package 입출력및사친연산;

import java.util.*;

class OOP {
	private int a, b;
	
	OOP(int a, int b){
		this.a = a;
		this.b = b;
	}
	
	public int Plus() {
		return (a+b);
	}
	public int Minus() {
		return(a-b);
	}
	public int Multi() {
		return (a*b);
	}
	public int Div() {
		return (a/b);
	}
	public int Res() {
		return (a%b);
	}
}

public class Solution10869 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		OOP o = new OOP(s.nextInt(), s.nextInt());
		int[] g = {
				o.Plus(),
				o.Minus(),
				o.Multi(),
				o.Div(),
				o.Res()
		};
		
		for(int i = 0; i < g.length; i++) {
			System.out.println(g[i]);
		}
		
		s.close();
	}

}
