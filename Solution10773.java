// Zero

import java.util.*;
import java.io.*;

public class Solution10773{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        Stack<Integer> stk = new Stack<Integer>();
        int n = Integer.parseInt(br.readLine());
        int sum=0;
        
        for(int i = 0; i < n; i++){
            int c = Integer.parseInt(br.readLine());
            if(i==0){
                if(c!=0){
                    sum+=c;
                    stk.push(c);
                }
            }
            else if(c==0){
                if(stk.isEmpty()) continue;
                else sum-=(stk.pop());
            }
            else{
                sum+=c;
                stk.push(c);
            }
        }
        System.out.println(sum);
    }
}