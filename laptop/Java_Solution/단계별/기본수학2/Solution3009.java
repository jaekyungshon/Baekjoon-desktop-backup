// Fourth Dot

import java.io.*;
import java.util.*;

public class Solution3009 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        Vector<Integer> front = new Vector<Integer>();
        Vector<Integer> back = new Vector<Integer>();
        int x=-1,y=-1,idx=5,idy=5;
        for(int i=0; i<3; i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            front.add(Integer.parseInt(st.nextToken()));
            back.add(Integer.parseInt(st.nextToken()));
        }

        HashSet<Integer> s1 = new HashSet<Integer>(front);
        HashSet<Integer> s2 = new HashSet<Integer>(back);
        for(int a : s1){
            if(Collections.frequency(front, a)<idx) x=a;
        }
        for(int b : s2){
            if(Collections.frequency(back, b)<idy) y=b;
        }
        System.out.println(String.format("%d %d", x, y));
        br.close();
    }
}
