// Min, Max

import java.util.*;
import java.io.*;

public class Solution10818 {
    static int nMax = -1000000;
    static int nMin = 1000000;
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int arrLen = Integer.parseInt(br.readLine());
        String s = br.readLine();
        StringTokenizer st = new StringTokenizer(s);
        for(int i = 0; i < arrLen; i++){
            int tmp = Integer.parseInt(st.nextToken());
            nMax = Math.max(nMax, tmp);
            nMin = Math.min(nMin, tmp);
        }

        bw.write(Integer.toString(nMin)+" "+Integer.toString(nMax));
        bw.flush();
        bw.close();
        br.close();
    }
}