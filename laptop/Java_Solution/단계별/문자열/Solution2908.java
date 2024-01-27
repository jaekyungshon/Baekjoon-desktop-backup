// Const Num

import java.util.*;
import java.io.*;

public class Solution2908 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException{
        String str = br.readLine();
        StringTokenizer st = new StringTokenizer(str);
        StringBuffer s1 = new StringBuffer(st.nextToken());
        StringBuffer s2 = new StringBuffer(st.nextToken());

        System.out.println(sb.append(Math.max(Integer.parseInt(s1.reverse().toString()), Integer.parseInt(s2.reverse().toString()))));
        br.close();
    }
}
