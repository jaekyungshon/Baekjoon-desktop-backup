// Stack Array

import java.io.*;
import java.util.*;

public class Solution1874 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static Stack<Integer> stk = new Stack<>();
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        int n=Integer.parseInt(br.readLine());
        int cnt=1;
        boolean flag = false;

        for(int i=0; i<n; i++){
            int popNum = Integer.parseInt(br.readLine());
            while(cnt <= popNum){
                stk.push(cnt++);
                sb.append("+\n");
            }
            if(stk.peek()==popNum){
                stk.pop();
                sb.append("-\n");
            }
            else{
                flag=true;break;
            }
        }

        if(flag) System.out.print("NO");
        else System.out.print(sb);
    }
}
