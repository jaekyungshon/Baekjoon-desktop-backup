// Queue 2

import java.io.*;
import java.util.*;

public class Solution18258 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException{
        int n=Integer.parseInt(br.readLine());
        Deque<Integer> q = new LinkedList<>();

        for(int i=0; i<n; i++){
            String tmp=br.readLine();
            String ts; int td=-1;
            char[] tc=tmp.toCharArray();
            if(tc[0]=='p' && tc[1]=='u'){
                StringTokenizer st = new StringTokenizer(tmp);
                ts=st.nextToken();
                td=Integer.parseInt(st.nextToken());
            }
            else{
                ts=tmp;
            }

            if(ts.equals("push")) {
                q.add(td);
            }
            else if(ts.equals("pop")){
                if(q.isEmpty()) sb.append("-1\n");
                else sb.append(String.format("%d\n",q.poll()));
            }
            else if(ts.equals("size")) sb.append(String.format("%d\n",q.size()));
            else if(ts.equals("empty")){
                if(q.isEmpty()) sb.append("1\n");
                else sb.append("0\n");
            }
            else if(ts.equals("front")){
                if(q.isEmpty()) sb.append("-1\n");
                else sb.append(String.format("%d\n",q.peek()));
            }
            else{
                if(q.isEmpty()) sb.append("-1\n");
                else sb.append(String.format("%d\n",q.peekLast()));
            }
        }
        System.out.print(sb);
        br.close();
    }
}
