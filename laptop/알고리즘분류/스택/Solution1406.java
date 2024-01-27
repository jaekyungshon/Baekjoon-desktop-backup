// Editor

import java.io.*;
import java.util.*;

public class Solution1406 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    public static void main(String[] args) throws IOException{
        Stack<String> s1=new Stack<>();
        Stack<String> s2=new Stack<>();

        
        String[] init=br.readLine().split("");
        for(String s:init){
            s1.add(s);
        }

        int n=Integer.parseInt(br.readLine());
        for(int i=0; i<n; i++){
            String tmp=br.readLine();
            if(tmp.equals("L")){
                if(!s1.isEmpty()) s2.push(s1.pop());
            }
            else if(tmp.equals("D")){
                if(!s2.isEmpty()) s1.push(s2.pop());
            }
            else if(tmp.equals("B")){
                if(!s1.isEmpty()) s1.pop();
            }
            else{
                char t=tmp.charAt(2);
                s1.push(String.valueOf(t));
            }
        }

        while(!s1.isEmpty()){
            s2.push(s1.pop());
        }
        while(!s2.isEmpty()){
            bw.write(s2.pop());
        }
        bw.flush();
        bw.close();
        br.close();
    }    
}
