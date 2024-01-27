// Print to Star - 9

import java.io.*;

public class Solution2446 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        int n = Integer.parseInt(br.readLine());

        for(int i=0; i<n-1; i++){
            for(int j=0; j<i; j++){
                System.out.print(" ");
            }
            for(int j=0; j<2*(n-i)-1; j++){
                System.out.print("*");
            }
            System.out.println();
        }

        for(int i=n-1; i>=0; i--){
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
