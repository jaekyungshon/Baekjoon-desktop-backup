// Reverse to Words 2

import java.util.*;
import java.io.*;

public class Solution17413{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException{
        char[] c=br.readLine().toCharArray();
        Stack<Character> stk=new Stack<>();
        int flag=0;

        for(int i=0; i<c.length; i++){
            if(c[i]=='<'){
                if(stk.size()>0){
                    while(!stk.isEmpty()){
                        sb.append(stk.pop());
                    }
                }
                sb.append(c[i]);flag+=1;
            }
            else if(c[i]=='>'){
                sb.append(c[i]);flag-=1;
            }
            else if(flag>0){
                sb.append(c[i]);
            }
            else if(c[i]==' '){
                while(!stk.isEmpty()){
                    sb.append(stk.pop());
                }
                sb.append(' ');
            }
            else{
                stk.add(c[i]);
            }
        }
        if(stk.size()>0){
            while(!stk.isEmpty()){
                sb.append(stk.pop());
            }
        }
        System.out.print(sb);
        br.close();
    }
}