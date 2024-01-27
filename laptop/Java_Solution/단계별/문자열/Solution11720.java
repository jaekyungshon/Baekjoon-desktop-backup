// Sum to All of Num

import java.util.*;
import java.io.*;

public class Solution11720 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException{
        int n = Integer.parseInt(br.readLine());
        int sum = 0;
        char s[] = br.readLine().toCharArray();

        for(int i = 0; i < n; i++){
            sum += (int)(s[i] - '0');
        }
        System.out.println(sb.append(Integer.toString(sum)));
    }
}
