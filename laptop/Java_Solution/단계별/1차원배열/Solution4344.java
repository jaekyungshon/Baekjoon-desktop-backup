// Over-Average

import java.io.*;
import java.util.*;

public class Solution4344 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();

    static double getAvg(double[] scoreList, double n){
        double tmpScore = 0.0;
        for(int i = 0; i < (int)n; i++){
            tmpScore += scoreList[i];
        }
        return (tmpScore / n);
    }

    static void checkToPrint(double[] scoreList, double n, double avg){
        int you = 0;
        for(int i = 0; i < (int)n; i++){
            if(scoreList[i] > avg) you++;
        }
        double ans = (((double)you / n) * 100.0);
        sb.append(String.format("%.3f", ans)+"%\n");
    }
    
    public static void main(String[] args) throws IOException{
        int testCaseCnt = Integer.parseInt(br.readLine());
        for(int i = 0; i < testCaseCnt; i++){
            // Input Data
            String s = br.readLine();
            StringTokenizer st = new StringTokenizer(s);
            double n = Double.parseDouble(st.nextToken());
            // Data in Score Array
            double[] scoreList = new double[(int)n];
            int idx = 0;
            while(st.hasMoreTokens()){
                scoreList[idx++] = Double.parseDouble(st.nextToken());
            }
            // Get - Avg Score
            double avg = getAvg(scoreList, n);
            // Insert - PrintLIst
            checkToPrint(scoreList, n, avg);
        }
        // Print
        System.out.println(sb);
        br.close();
    }    
}
