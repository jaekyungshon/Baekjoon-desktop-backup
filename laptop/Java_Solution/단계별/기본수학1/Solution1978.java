// Prime Number

import java.io.*;
import java.util.StringTokenizer;

public class Solution1978 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        br.readLine();
        StringTokenizer st = new StringTokenizer(br.readLine());

        int cnt=0;
        while(st.hasMoreTokens()){
            int n = Integer.parseInt(st.nextToken());
            if(n == 1) continue;
            
            boolean flag = true;
            for(int i = 2; i < n; i++){
                if(n % i == 0){
                    flag = false;
                    break;
                }
            }
            if(flag) cnt++;
        }
        System.out.println(cnt);
    }
}
