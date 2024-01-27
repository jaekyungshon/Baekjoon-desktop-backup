// Keylogger

import java.util.*;
import java.io.*;

public class Solution5397{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static Stack<Character> stk1;
    static Stack<Character> stk2;
    public static void main(String[] args) throws IOException{
        int t=Integer.parseInt(br.readLine());
        for(int i=0; i<t; i++){
            char[] d=br.readLine().toCharArray();
            stk1=new Stack<>();
            stk2=new Stack<>();
            StringBuilder sb = new StringBuilder();

            for(int j=0; j<d.length; j++){
                if(d[j]=='<'){
                    if(!stk1.isEmpty()){
                        stk2.add(stk1.pop());
                    }
                }
                else if(d[j]=='>'){
                    if(!stk2.isEmpty()){
                        stk1.add(stk2.pop());
                    }
                }
                else if(d[j]=='-'){
                    if(!stk1.isEmpty()){
                        stk1.pop();
                    }
                }
                else{
                    stk1.add(d[j]);
                }
            }
            while(!stk2.isEmpty()){
                stk1.add(stk2.pop());
            }
            for(int j=0; j<stk1.size(); j++){
                sb.append(stk1.elementAt(j));
            }
            System.out.println(sb);
        }
        br.close();
    }
}