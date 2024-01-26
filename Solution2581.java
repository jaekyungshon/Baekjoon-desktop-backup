// Prime Number

import java.io.*;

public class Solution2581 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        int m = Integer.parseInt(br.readLine());
        int n = Integer.parseInt(br.readLine());
        int sum=0;
        int min=10001;
        for(int i = m; i <= n; i++){
            boolean flag = true;
            if(i == 1) continue;
            for(int j = 2; j < (int)(Math.sqrt((double)i)+1); j++){
                if(i % j == 0){
                    flag = false;
                    break;
                }
            }
            sum=(flag?sum+=i:sum);
            if(flag && min > i) min=i;
        }
        if(sum > 0)
            System.out.println(String.format("%d\n%d", sum, min));
        else
            System.out.println(-1);
    }    
}
