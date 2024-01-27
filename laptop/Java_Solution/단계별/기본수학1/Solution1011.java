// Fly me to the Alpha Centauri

import java.util.*;
import java.io.*;

public class Solution1011 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();

    static int GetValue(String s){
        StringTokenizer st = new StringTokenizer(s);
        double x = Integer.parseInt(st.nextToken());
        double y = Integer.parseInt(st.nextToken());
        return (int)Math.sqrt(4*(y-x)-3);
    }
    public static void main(String[] args) throws IOException{
        int n = Integer.parseInt(br.readLine());

        for(int i = 0; i < n; i++){
            sb.append(GetValue(br.readLine())+"\n");
        }
        System.out.println(sb);
        br.close();
    }
}
