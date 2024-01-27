// ACM Hotel

import java.util.*;
import java.io.*;

public class Solution10250 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        int loop = Integer.parseInt(br.readLine());

        for(int i = 0; i < loop; i++){
            StringBuilder sb = new StringBuilder();
            StringTokenizer st = new StringTokenizer(br.readLine());
            int h = Integer.parseInt(st.nextToken());
            int w = Integer.parseInt(st.nextToken());
            int n = Integer.parseInt(st.nextToken());

            int y, x;
            if(n % h == 0) y = h;
            else y = n % h;
            x = (n-y)/h+1;

            sb.append(String.format("%d%02d", y, x));
            System.out.println(sb);
            sb.setLength(0);
        }
    }
}
