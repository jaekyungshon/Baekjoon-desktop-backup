// FAKTOR

import java.io.*;
import java.util.*;

public class Solution2914{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        StringTokenizer st = new StringTokenizer(br.readLine());
        int a=Integer.parseInt(st.nextToken());
        int i=Integer.parseInt(st.nextToken());
        
        int t1 = a*i;
        int t2 = a*(--i)+1;

        int avg1 = (int)((double)t1/(double)a+1);
        //int avg2 = (int)((double)t2/(double)a+1);
        
        if(avg1==i) System.out.print(t1);
        else System.out.print(t2);
        br.close();
    }
}