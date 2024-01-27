// Print Queue

import java.util.*;
import java.io.*;

class NumType{
    int N;
    int idx;

    NumType(int N, int idx){
        this.N = N;
        this.idx = idx;
    }
}

public class Solution1966 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static int max=-1000000;

    static void checkMax(Queue<NumType> q){
        Iterator<NumType> itr = q.iterator();
        while(itr.hasNext()){
            max=Math.max(itr.next().N,max);
        }
    }

    static Queue<NumType> setting(String s, int n, int m){
        Queue<NumType> tmp = new LinkedList<>();
        StringTokenizer st = new StringTokenizer(s);

        int idx=0;
        while(st.hasMoreTokens()){
            tmp.offer(new NumType(Integer.parseInt(st.nextToken()),idx));
            idx++;
        }
        return tmp;
    }

    static int check(Queue<NumType> q, int m){
        int cnt=0;
        checkMax(q);
        while(true){
            NumType num=q.peek();
            if(num.N==max){
                if(num.idx==m) return ++cnt;
                else{
                    cnt++;
                    q.poll();
                    max=-100000;
                    checkMax(q);
                }
            }
            else q.offer(q.poll());
        }
    }

    public static void main(String[] args) throws IOException{
        int loop = Integer.parseInt(br.readLine());
        for(int i=0; i < loop; i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n=Integer.parseInt(st.nextToken());
            int m=Integer.parseInt(st.nextToken());
            
            Queue<NumType> q = setting(br.readLine(),n,m);
            int cnt=check(q,m);
            max=-1000000;
            if(i!=loop-1) sb.append(Integer.toString(cnt)+"\n");
            else sb.append(Integer.toString(cnt));
        }
        System.out.print(sb);
        br.close();
    }
}
