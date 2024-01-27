// Stack Basic

import java.io.*;
import java.util.*;

public class Solution10828 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static Stack<Integer> stk = new Stack<>();
    public static void main(String[] args) throws IOException {
        int n=Integer.parseInt(br.readLine());

        for(int i=0; i<n; i++){
            String tmp=br.readLine();
            char[] s = tmp.toCharArray();
            String ts; int tn=-1;
            if(s[0]=='p' && s[1]=='u'){
                StringTokenizer st = new StringTokenizer(tmp);
                ts=st.nextToken();
                tn=Integer.parseInt(st.nextToken());
            }
            else{
                ts=tmp;
            }

            if(ts.equals("push")) stk.push(tn);
            else if(ts.equals("pop")){
                if(stk.isEmpty()) sb.append("-1\n");
                else sb.append(String.format("%d\n",stk.pop()));
            }
            else if(ts.equals("size")) sb.append(String.format("%d\n",stk.size()));
            else if(ts.equals("empty")){
                if(stk.isEmpty()) sb.append("1\n");
                else sb.append("0\n");
            }
            else{
                if(stk.isEmpty()) sb.append("-1\n");
                else sb.append(String.format("%d\n",stk.peek()));
            }
        }
        System.out.print(sb);
    }
}
