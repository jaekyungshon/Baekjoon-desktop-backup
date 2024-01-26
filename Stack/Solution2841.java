// Stack : 2841

import java.util.*;
import java.io.*;

public class Solution2841{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static int n,p,ans=0;
    public static void main(String[] args) throws IOException{
        Vector<Stack<Integer>> v = new Vector<>();
        StringTokenizer st;
        int S,T;

        // init to stack
        for(int i=0; i<7; i++){
            v.add(new Stack<Integer>());
        }

        // Input Data
        st=new StringTokenizer(br.readLine());
        n=Integer.parseInt(st.nextToken());
        p=Integer.parseInt(st.nextToken());

        for(int i=0; i<n; i++){
            st=new StringTokenizer(br.readLine());
            S=Integer.parseInt(st.nextToken());
            T=Integer.parseInt(st.nextToken());

            while(!v.get(S).empty() && v.get(S).peek() > T){
                v.get(S).pop();
                ans++;
            }

            if(v.get(S).empty() || v.get(S).peek() != T){
                v.get(S).add(T);
                ans++;
            }
        }

        System.out.println(ans);
        br.close();
    }
}