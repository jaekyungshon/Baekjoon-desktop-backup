// PS

import java.io.*;
import java.util.*;

public class Solution9012{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException{
        int n=Integer.parseInt(br.readLine());
        for(int i=0; i<n; i++){
            Stack<Character> s = new Stack<>();
            char[] l = br.readLine().toCharArray();
            boolean flag = true;
            for(char a:l){
                if(a=='('){
                    s.add(a);
                }
                else if(!s.isEmpty()){
                    s.pop();
                }
                else{
                    flag=false;
                    break;
                }
            }
            if(flag && s.isEmpty()) sb.append("YES\n");
            else sb.append("NO\n");
        }
        System.out.print(sb);
        br.close();
    }
}