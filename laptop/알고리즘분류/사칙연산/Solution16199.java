// Cal to Age

import java.io.*;
import java.util.*;

public class Solution16199{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        int[] arr=new int[3];
        int[] tarr=new int[3];
        StringTokenizer st = new StringTokenizer(br.readLine());
        int index=0;
        while(st.hasMoreTokens()){
            arr[index]=Integer.parseInt(st.nextToken());
        }
        index=0;
        st=new StringTokenizer(br.readLine());
        while(st.hasMoreTokens()){
            tarr[index]=Integer.parseInt(st.nextToken());
        }

        int man, se=1, yeon;
        man=tarr[0]-arr[0];
        if(arr[1]>tarr[1] || (arr[1]==tarr[1] && arr[2]>tarr[2])){
            man+=1;
        }
        se+=tarr[0]-arr[0];
        yeon=tarr[0]-arr[0];

        System.out.print(String.format("%d\n%d\n%d",man,se,yeon));
        br.close();
    }
}