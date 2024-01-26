package Topcoder;

import java.io.*;

public class A0Paper {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    static String canBuild(int[] A){
        if(A[0] > 0) return "Possible";
        else{
            for(int i=A.length-1; i>=1; i--){
                if(A[i] == 0) continue;
                else{
                    A[i-1]+=(int)A[i]/2;
                }
            }
            if(A[0]==0) return "Impossible";
            else return "Possible";
        }
    }
    public static void main(String[] args) throws IOException{
        int[] tmp = {2,0,0,0,0,0,0,3,2,0,0,5,0,3,0,0,1,0,0,0,5};
        System.out.println(canBuild(tmp));
    }
}
