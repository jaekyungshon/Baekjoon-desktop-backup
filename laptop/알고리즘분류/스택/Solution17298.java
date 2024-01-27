// O num

import java.io.*;
import java.util.*;

public class Solution17298 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException{
        int n=Integer.parseInt(br.readLine());
        int[] l=new int[n];

        StringTokenizer st = new StringTokenizer(br.readLine());
        int idx=0;
        while(st.hasMoreTokens()){
            l[idx++]=Integer.parseInt(st.nextToken());
        }

        for(int i=0; i<n-1; i++){
            boolean flag=true;
            for(int j=i+1; j<n; j++){
                if(l[i]<l[j]){
                    flag=false;sb.append(String.format("%d ",l[j]));break;
                }
            }
            if(flag) sb.append("-1 ");
        }

        sb.append("-1");
        System.out.print(sb);
        br.close();
    }    
}
