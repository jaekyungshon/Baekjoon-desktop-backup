package CodeUp;

import java.io.*;
import java.util.StringTokenizer;

public class CodeupBasicJava {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static int n,m;
    static int[][] inputData;
    static int[][] tmpData;
    static int[][] answer;

    static void SumCol(){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int tmp=0;
                for(int k=0; k<=j; k++){
                    tmp+=inputData[i][k];
                }
                tmpData[i][j]=tmp;
            }
        }
        for(int i=0; i<m; i++){
            answer[0][i]=tmpData[0][i];
        }
    }
    
    static void insert_answer(){
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                int tmp=0;
                for(int k=0; k<=i; k++){
                    tmp+=tmpData[k][j];
                }
                answer[i][j]=tmp;
            }
        }
    }

    public static void main(String[] args) throws IOException{
        StringTokenizer st = new StringTokenizer(br.readLine());
        n=Integer.parseInt(st.nextToken());
        m=Integer.parseInt(st.nextToken());

        inputData = new int[n][m];
        answer = new int[n][m];
        tmpData = new int[n][m];
        for(int i=0; i<n; i++){
            int col=0;
            st=new StringTokenizer(br.readLine());
            while(st.hasMoreTokens()){
                inputData[i][col++]=Integer.parseInt(st.nextToken());
            }
        }

        SumCol();
        if(n>1) insert_answer();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                System.out.print(String.format("%d ",answer[i][j]));
            }
            System.out.println();
        }
        br.close();
    }
}
