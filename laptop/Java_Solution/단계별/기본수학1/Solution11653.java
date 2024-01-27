// Prime Factozation

import java.io.*;

public class Solution11653 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException {
        int n = Integer.parseInt(br.readLine());
        int i = 2;
        int r = (int)(Math.sqrt((double)n));

        while(i<=r){
            while(n%i==0){
                System.out.println(i);
                n/=i;
            }
            i++;
        }
        if(n>1) System.out.println(n);
    }
}
