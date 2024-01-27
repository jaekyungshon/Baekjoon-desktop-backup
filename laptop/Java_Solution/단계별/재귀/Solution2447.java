// Print to Star-10

import java.io.*;
import java.util.*;

public class Solution2447 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    
    static ArrayList<String> Recursion_Star(int n){
        if(n==1){
            ArrayList<String> tmp = new ArrayList<String>(){{add("*");}};
            return tmp;
        }
        ArrayList<String> s = Recursion_Star((int)(n/3));
        ArrayList<String> l = new ArrayList<String>();

        for(String a : s){
            l.add(a+a+a);
        }
        for(String a : s){
            String t = a;
            for(int i = 0; i < (int)(n/3); i++){
                t += " ";
            }
            t += a;
            l.add(t);
        }
        for(String a : s){
            l.add(a+a+a);
        }
        return l;
    }

    public static void main(String[] args) throws IOException{
        int n = Integer.parseInt(br.readLine());
        ArrayList<String> a = Recursion_Star(n);
        for(int i=0; i< a.size(); i++)
            System.out.println(a.get(i));
        br.close();
    }
}
