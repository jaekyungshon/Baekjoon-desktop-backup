// Hanoi

import java.io.*;

public class Solution11729 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static void Hanoi(int n, int start, int to, int via){
        if(n == 1){
            sb.append(Integer.toString(start)+" "+Integer.toString(to)+"\n");
        }
        else{
            Hanoi(n-1, start, via, to);
            sb.append(Integer.toString(start)+" "+Integer.toString(to)+"\n");
            Hanoi(n-1, via, to, start);
        }
    }
    public static void main(String[] args) throws IOException{
        int n = Integer.parseInt(br.readLine());
        sb.append(Integer.toString((int)(Math.pow(2.,n))-1)+"\n");
        Hanoi(n, 1, 3, 2);
        System.out.println(sb);
    }
}
