// Escape Sq

import java.io.*;
import java.util.StringTokenizer;

public class Solution1085 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static int check(int x, int y, int w, int h){
        return Math.min(Math.min(x,w-x), Math.min(y,h-y));
    }
    public static void main(String[] args) throws IOException{
        StringTokenizer st = new StringTokenizer(br.readLine());
        int x = Integer.parseInt(st.nextToken());
        int y = Integer.parseInt(st.nextToken());
        int w = Integer.parseInt(st.nextToken());
        int h = Integer.parseInt(st.nextToken());

        System.out.println(check(x,y,w,h));
        br.close();
    }
}
