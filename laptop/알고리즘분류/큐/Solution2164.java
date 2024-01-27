// Card 2

import java.util.*;
import java.io.*;

public class Solution2164 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        int n=Integer.parseInt(br.readLine());
        Queue<Integer> dq=new LinkedList<>();

        for(int i=1; i<=n; i++){
            dq.offer(i);
        }

        while(dq.size()>1){
            dq.poll();
            if(dq.size()==1) break;
            dq.add(dq.poll());
        }

        System.out.print(dq.peek());
        br.close();
    }
}
