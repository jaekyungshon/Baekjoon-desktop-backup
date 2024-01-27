// Find to Alphabet

import java.util.*;
import java.io.*;

public class Solution10809 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static int[] list = new int[123];
    public static void main(String[] args) throws IOException{
        for(int i = 0; i < 123; i++){
            list[i] = -1;
        }
        char s[] = br.readLine().toCharArray();

        for(int i = 0; i < s.length; i++){
            int idx = s[i];
            if(list[idx] == -1){
                list[idx] = i;
            }
        }

        for(int i = 97; i <= 122; i++){
            sb.append(Integer.toString(list[i])+" ");
        }
        System.out.print(sb);
        br.close();
    }    
}
