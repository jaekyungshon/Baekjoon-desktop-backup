// Pitaghoras

import java.util.*;
import java.io.*;

public class Solution4153 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        while(true){
            Vector<Integer> l = new Vector<Integer>();
            StringTokenizer st = new StringTokenizer(br.readLine());
            while(st.hasMoreTokens()){
                int tmp = Integer.parseInt(st.nextToken());
                if(tmp == 0) System.exit(0);
                l.add(tmp);
            }
            Collections.sort(l);
            if(l.get(0)*l.get(0)+l.get(1)*l.get(1)==l.get(2)*l.get(2))
                System.out.println("right");
            else
                System.out.println("wrong");
        }
    }
}
