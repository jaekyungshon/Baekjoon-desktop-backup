// 윤년
import java.util.*;

public class Solution2753 {
   public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		
		if((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)){
			System.out.println("1");
		}
		else{
			System.out.println("0");
		}
		s.close();
   }
}

