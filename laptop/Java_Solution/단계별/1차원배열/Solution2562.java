// Max Index

import java.io.*;
import java.util.*;

public class Solution2562 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    public static void main(String[] args) throws IOException{
        int nMax = -1;
        int idx = -1;
        for(int i = 0; i < 9; i++){
            int tmp = Integer.parseInt(br.readLine());
            if(nMax < tmp){
                nMax = tmp;
                idx = i;
            }
        }
        bw.write(Integer.toString(nMax)+"\n"+Integer.toString(++idx));
        bw.flush();
        bw.close();
        br.close();
    }    
}
