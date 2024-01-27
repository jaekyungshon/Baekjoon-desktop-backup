// Postfix Fraction 2

import java.util.*;
import java.io.*;

public class Solution1935{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb=new StringBuilder();
    public static void main(String[] args) throws IOException{
        int n=Integer.parseInt(br.readLine());
        double[] alpha=new Double[65+n];
        Stack<Character> stk=new Stack<>();

        char[] s=br.readLine().toCharArray();
        for(int i=0; i<n; i++){
            alpha[65+i]=Double.parseDouble(br.readLine());
        }

        for(int i=0; i<s.length; i++){
            if(s[i]>=65 && s[i]<65+n){
                stk.add(s[i]);
            }
            else{
                char op2=stk.pop();
                char op1=stk.pop();
                switch(s[i]){
                    case '+': stk.add(string.format());break;
                    case '-': stk.add(alpha[op1-'0']-alpha[op2-'0']);break;
                    case '*': stk.add(alpha[op1-'0']*alpha[op2-'0']);break;
                    case '/': stk.add(alpha[op1-'0']/alpha[op2-'0']);break;
                }
            }
        }
        System.out.print(String.format("%.2lf",stk.peek()));
        br.close();
    }
}