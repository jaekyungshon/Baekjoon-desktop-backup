// Hansu

import java.util.*;
import java.io.*;

public class Solution1065 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder buf = new StringBuilder();
    static void checkToPrint(int n){
        if(n <= 99) buf.append(Integer.toString(n));
        else{
            int cnt = 99;
            for(int i = 101; i <= n; i++){
                // Using to AP 'General-Terms Method / a3'
                if((i%100)%10 == (i/100)+(2*((i%100)/10-(i/100))))
                    cnt++;
            }
            buf.append(Integer.toString(cnt));
        }
        System.out.println(buf);
    }
    public static void main(String[] args) throws IOException{
        int n = Integer.parseInt(br.readLine());
        checkToPrint(n);
        br.close();
    }
}
