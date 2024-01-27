// Get to Prime Number

import java.io.*;
import java.util.StringTokenizer;

public class Solution1929 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static int m,n;
    static int[] arr;

    static void InputData(String s){
        StringTokenizer st = new StringTokenizer(s);
        m = Integer.parseInt(st.nextToken());
        n = Integer.parseInt(st.nextToken());
    }
    static void Init(){
        arr = new int[n+1];
        arr[0]=arr[1]=1;
        for(int i=2; i<n+1; i++){
            arr[i]=0;
        }
    }
    public static void main(String[] args) throws IOException {
        // Get Input Data
        InputData(br.readLine());
        // Init - arr
        Init();
        // Check
        for(int i=2; i<(int)(Math.sqrt((double)n+1)+1); i++){
            if(arr[i]==0){
                if(i>=m) sb.append(Integer.toString(i)+"\n");
                for(int j=i*i; j<n+1; j+=i){
                    arr[j]=1;
                }
            }
        }
        // Print Answer
        System.out.print(sb);
        br.close();
    }
}
