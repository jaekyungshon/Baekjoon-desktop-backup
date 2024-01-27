// Repaint to ChessBoard

import java.util.*;
import java.io.*;

class Chess{
    int minCnt=0;
    char[][] board;

    public Chess(char[][] board){
        this.board = board;
        check();
    }

    private void check(){
        minCnt=Math.min(startB(),startW());
    }

    private int startB(){
        int cnt=0;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                int rowIdx,colIdx;
                if(i==0 || i==2 || i==4 || i==6) rowIdx=0;
                else rowIdx=1;
                if(j==0 || j==2 || j==4 || j==6) colIdx=0;
                else colIdx=1;

                if((rowIdx==0 && colIdx==0) || (rowIdx==1 && colIdx==1)){
                    if(board[i][j] != 'B') cnt++;
                }
                if((rowIdx==0 && colIdx==1) || (rowIdx==1 && colIdx==0)){
                    if(board[i][j] != 'W') cnt++;
                }
            }
        }
        return cnt;
    }

    private int startW(){
        int cnt=0;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                int rowIdx,colIdx;
                if(i==0 || i==2 || i==4 || i==6) rowIdx=0;
                else rowIdx=1;
                if(j==0 || j==2 || j==4 || j==6) colIdx=0;
                else colIdx=1;

                if((rowIdx==0 && colIdx==0) || (rowIdx==1 && colIdx==1)){
                    if(board[i][j] != 'W') cnt++;
                }
                if((rowIdx==0 && colIdx==1) || (rowIdx==1 && colIdx==0)){
                    if(board[i][j] != 'B') cnt++;
                }
            }
        }
        return cnt;
    }
}

public class Solution1018 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        int min=1000000;
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        char[][] b = new char[n][m];
        for(int i = 0; i < n; i++){
            b[i] = br.readLine().toCharArray();
        }

        for(int i=0; i<n-7; i++){
            for(int j=0; j<m-7; j++){
                char[][] tmp = Arrays.copyOfRange(b, 0+i, 8+i);
                char[][] Rtmp=new char[8][8];
                for(int k=0; k<8; k++){
                    Rtmp[k]=Arrays.copyOfRange(tmp[k],0+j,8+j);
                }
                Chess c = new Chess(Rtmp);
                min=Math.min(min,c.minCnt);
            }
        }
        System.out.println(min);
    }
}
