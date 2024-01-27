// Loop to String

import java.util.*;
import java.io.*;

public class Solution2675 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException{
        int testCase = Integer.parseInt(br.readLine());

        for(int i = 0; i < testCase; i++){
            String s = br.readLine();
            StringTokenizer st = new StringTokenizer(s);
            int loop = Integer.parseInt(st.nextToken());
            char str[] = st.nextToken().toCharArray();
            for(int j = 0; j < str.length; j++){
                for(int k = 0; k < loop; k++){
                    sb.append(str[j]);
                }
            }
            sb.append("\n");
        }
        System.out.print(sb);
        br.close();
    }
}
