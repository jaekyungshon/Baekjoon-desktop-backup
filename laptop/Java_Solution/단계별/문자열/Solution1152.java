// Count to Words

import java.util.*;
import java.io.*;

public class Solution1152 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException{
        String s = br.readLine().trim();
        StringTokenizer st = new StringTokenizer(s);
        int cnt=0;
        
        while(st.hasMoreTokens()){
            cnt++;
            st.nextToken();
        }
        System.out.println(sb.append(Integer.toString(cnt)));
        br.close();
    }
}