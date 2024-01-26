// 2018 YS Univ Progamming Contest

import java.io.*;

public class Solution15667{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        int n=Integer.parseInt(br.readLine());
        int ac=(int)Math.sqrt((1.0-4.*(1.-(double)n)));
        int k1=(-1+ac)/2;
        int k2=(-1-ac)/2;

        System.out.print((1+k1+k1*k1)==n ? k1:k2);
        br.close();
    }
}