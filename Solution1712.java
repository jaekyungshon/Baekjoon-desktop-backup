// Break-Even Point
/*
* Conditions
* i = All Sell-Money
* 1) A+B*i < C*i ==> (C-B)*i > A ==> i > A / (C-B)
* 2) C > B
*/

import java.io.*;
import java.util.*;

public class Solution1712 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        StringTokenizer st = new StringTokenizer(br.readLine());
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());

        if(b >= c)
            System.out.println(-1);
        else
            System.out.println(a/(c-b)+1);
        br.close();
    }
}