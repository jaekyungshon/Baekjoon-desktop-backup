// Snake

import java.io.*;
import java.util.*;

class Snake{
    int row;
    int col;

    Snake(int a, int b){
        row=a;
        col=b;
    }
}

class DirectionX{
    int time;
    char arrow;

    DirectionX(String s) throws IOException{
        StringTokenizer st = new StringTokenizer(s);
        time=Integer.parseInt(st.nextToken());
        arrow=st.nextToken().toCharArray()[0];
    }
}

class Apple{
    int row;
    int col;

    Apple(String s) throws IOException{
        StringTokenizer st = new StringTokenizer(s);
        row=Integer.parseInt(st.nextToken());
        col=Integer.parseInt(st.nextToken());
    }
}

public class Solution3190 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static int n,k,l;
    static int totalTime=0;
    static Vector<Apple> apple;
    static Vector<DirectionX> dir;
    static int[][] list;

    static void getBoard(String s) throws IOException{
        StringTokenizer st = new StringTokenizer(s);
        n=Integer.parseInt(st.nextToken());
    }
    static void getApple(String s) throws IOException{
        StringTokenizer st = new StringTokenizer(s);
        k=Integer.parseInt(st.nextToken());
        apple=new Vector<Apple>(k);
        for(int i=0; i<k; i++){
            apple.add(new Apple(br.readLine()));
        }
    }
    static void getDirectionX(String s) throws IOException{
        StringTokenizer st = new StringTokenizer(s);
        l=Integer.parseInt(st.nextToken());
        dir=new Vector<DirectionX>(l);
        for(int i=0; i<l; i++){
            dir.add(new DirectionX(br.readLine()));
        }
    }
    static void setBoard() throws IOException{
        list=new int[n][n];
        for(int i=0; i<n; i++)
            Arrays.fill(list[i],0);

        for(int i=0; i<k; i++){
            Apple tmp=apple.get(i);
            list[tmp.row][tmp.col]=1;
        }
        System.out.println("Init:");
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                System.out.print(list[i][j]);
                System.out.print(" ");
            }
            System.out.println();
        }
    }
    static void checkTime(){
        // Main Algorithm

        int curRow=0,curCol=0;
        int idx=0;
        // -4:right, -3:left, -2:up, -1:down
        int curDir=-4;

        DirectionX tmp=dir.get(idx);
        Deque<Snake> s = new LinkedList<>();
        list[curRow][curCol++]=2;

        s.add(new Snake(0,0));
        while((curRow>=0 && curRow<n) && (curCol>=0 && curCol<n)){
            // Check to meeting myself.
            if(list[curRow][curCol]==2) break;
            // Check First Move
            if(curDir==-4){
                
            }
            else if(curDir==-3){
                
            }
            else if(curDir==-2){

            }
            else{

            }
            // Move to 1
            if(list[curRow][curCol]==0){
                Snake tail = s.poll();
                list[tail.row][tail.col]=0;
            }
            list[curRow][curCol]=2;
            s.add(new Snake(curRow,curCol));
            // Time+1
            totalTime++;
            // Direction Check
            if(tmp.time==totalTime){
                if(curDir==-4){
                    if(tmp.arrow=='D') curDir=-1;
                    else curDir=-2;
                }
                else if(curDir==-3){
                    if(tmp.arrow=='D') curDir=-2;
                    else curDir=-1;
                }
                else if(curDir==-2){
                    if(tmp.arrow=='D') curDir=-4;
                    else curDir=-3;
                }
                else{
                    if(tmp.arrow=='D') curDir=-3;
                    else curDir=-4;
                }
                idx++;
                if(idx<l) tmp=dir.get(idx);
            }
            // Check to Snake next head position
            if(curDir==-4) curCol++;
            else if(curDir==-3) curCol--;
            else if(curDir==-2) curRow--;
            else curRow++;
        }
    }
    public static void main(String[] args) throws IOException{
        // Board
        getBoard(br.readLine());

        // Apple
        getApple(br.readLine());

        // Direction
        getDirectionX(br.readLine());

        // Board Setting
        setBoard();

        // Time Check
        checkTime();

        //Print to Answer
        System.out.print(totalTime);
        br.close();
    }
}