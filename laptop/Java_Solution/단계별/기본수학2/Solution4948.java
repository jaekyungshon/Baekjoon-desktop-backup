// Berete Kongjun

import java.util.*;
import java.io.*;

public class Solution4948 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static int[] list = new int[246913];

    static void Init(){
        Arrays.fill(list,0);
        for(int i=2; i<(int)(Math.sqrt((double)246912)+1); i++){
            for(int j=i*i; j<list.length; j+=i){
                list[j]=1;
            }
        }
    }
    static int check(int c){
        int cnt=0;
        for(int i=2; i < list.length; i++){
            if(list[i]==0 && i > c && i <= 2*c){
                cnt++;
            }
            else if(i > 2*c) break;
        }
        return cnt;
    }

    public static void main(String[] args) throws IOException{
        Init();
        while(true){
            int n=Integer.parseInt(br.readLine());
            if(n==0) break;
            sb.append(Integer.toString(check(n))+"\n");
        }
        System.out.print(sb);
        br.close();
    }
}
