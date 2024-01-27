// Print to Star - 5

import java.io.*;

public class Solution2442 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        int n = Integer.parseInt(br.readLine());

        for(int i = n-1; i >= 0; i--){
            for(int j=i; j>0; j--){
                System.out.print(" ");
            }
            for(int j=0; j<2*(n-i)-1; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
