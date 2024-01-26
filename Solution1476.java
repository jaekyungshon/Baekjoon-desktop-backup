// Calculate to Date

import java.io.*;
import java.util.StringTokenizer;

public class Solution1476{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        StringTokenizer st = new StringTokenizer(br.readLine());
        int e = Integer.parseInt(st.nextToken());
        int s = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        int n=1,a=1,b=1,c=1;
        while(true){
            if(a!=e || b!=s || c!=m){
                n++;a++;b++;c++;
                if(a>15)a=1;
                if(b>28)b=1;
                if(c>19)c=1;
            }
            else break;
        }
        System.out.println(n);
    }
}