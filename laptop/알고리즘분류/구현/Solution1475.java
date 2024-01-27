// Room Number

import java.io.*;

public class Solution1475 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        int[] l = {0,0,0,0,0,0,0,0,0,0};
        char[] c = br.readLine().toCharArray();
        
        for(char t:c){
            if(t=='9' || t=='6'){
                if(l[9]>=l[6]) l[6]++;
                else l[9]++;
            }
            else l[t-'0']++;
        }

        int max=-100000;
        for(int i=1; i<l.length;i++){
            max=Math.max(max,l[i]);
        }
        System.out.println(max);
    }
}
