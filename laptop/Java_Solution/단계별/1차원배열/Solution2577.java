// Count to Each of Number

import java.util.*;
import java.io.*;

public class Solution2577 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    public static void main(String[] args) throws IOException{
        int multi = 1;
        int seq = 100000000;
        Integer[] numList = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        for(int i = 0; i < 3; i++){
            multi *= Integer.parseInt(br.readLine());
        }
        
        if(multi < 100000000) seq /= 10;
        if(multi < 10000000) seq /= 10;

        while(seq >= 100){
            numList[multi/seq]++;
            multi %= seq;
            seq /= 10;
        }
        numList[multi/seq]++;
        numList[multi%seq]++;

        for(int i = 0; i < numList.length; i++){
            bw.write(Integer.toString(numList[i])+"\n");
            bw.flush();
        }
        bw.close();
        br.close();
    }   
}
