// I'll be the women's president!

import java.util.*;
import java.io.*;

public class Solution2775 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();

    public static int combination(int n, int k){
        if(n == k || k == 0) return 1;
        return combination(n-1, k-1)+combination(n-1,k);
    }

    public static void main(String[] args) throws IOException{
        int loop = Integer.parseInt(br.readLine());
        for(int i = 0; i < loop; i++){
            int k = Integer.parseInt(br.readLine());
            int n = Integer.parseInt(br.readLine());
            
            sb.append(Integer.toString(combination(n+k, k+1))+"\n");
        }
        System.out.print(sb);
        br.close();
    }    
}
