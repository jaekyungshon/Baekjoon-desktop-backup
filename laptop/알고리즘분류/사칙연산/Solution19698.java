// Cow Batch

import java.io.*;
import java.util.*;

public class Solution19698{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        StringTokenizer st = new StringTokenizer(br.readLine());
        int[] arr=new int[4];
        int index=0;
        while(st.hasMoreTokens()){
            arr[index++]=Integer.parseInt(st.nextToken());
        }
        int ans=(arr[1]/arr[3])*(arr[2]/arr[3]);
        if(ans<=arr[0]){
            System.out.print(ans);
        }
        else{
            System.out.print(arr[0]);
        }
    }
}