// Snail want to arrive in Math Floor

import java.io.*;
import java.util.StringTokenizer;

public class Solution2869 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        StringTokenizer st = new StringTokenizer(br.readLine());
        double a = Integer.parseInt(st.nextToken());
        double b = Integer.parseInt(st.nextToken());
        double v = Integer.parseInt(st.nextToken());

        System.out.println(Integer.toString((int)Math.ceil((v-b)/(a-b))));
        br.close();
    }
}
