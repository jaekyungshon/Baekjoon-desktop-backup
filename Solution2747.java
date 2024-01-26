// Fibonachi

import java.io.*;

public class Solution2747{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static int n;
    static int Fibonachi(int a, int b, int cnt){
        if(n==0) return a;
        else if(n==1 || cnt==n) return b;
        else{
            return Fibonachi(b,a+b,cnt+1);
        }
    }
    public static void main(String[] args) throws IOException{
        n = Integer.parseInt(br.readLine());
        System.out.println(Fibonachi(0, 1, 1));
        br.close();
    }
}