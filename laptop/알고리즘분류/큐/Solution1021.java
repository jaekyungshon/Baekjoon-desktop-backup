// Round to queue

import java.io.*;
import java.util.*;

public class Solution1021 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static int count=0;
    public static void main(String[] args) throws IOException{
        Deque<Integer> dq = new LinkedList<>();
        int[] want;

        StringTokenizer st = new StringTokenizer(br.readLine());
        int n=Integer.parseInt(st.nextToken());
        int t=Integer.parseInt(st.nextToken());

        want=new int[t];
        st = new StringTokenizer(br.readLine());
        int idx=0;
        while(st.hasMoreTokens()){
            want[idx++]=Integer.parseInt(st.nextToken());
        }

        for(int i=1; i<=n; i++){
            dq.addLast(i);
        }

        for(int i=0; i<t; i++){
            int check = want[i];
            if(dq.peek()==check){
                dq.pollFirst();
            }
            else{
                int checkIdx=0;
                Iterator<Integer> itr = dq.iterator();
                while(itr.hasNext()){
                    int tmp=itr.next();
                    if(tmp==check) break;
                    checkIdx++;
                }

                //Right
                if(checkIdx > dq.size()/2){
                    while(dq.peek()!=check){
                        dq.addFirst(dq.pollLast());
                        count++;
                    }
                }
                //Left
                else{
                    while(dq.peek()!=check){
                        dq.addLast(dq.pollFirst());
                        count++;
                    }
                }
                dq.pollFirst();
            }
        }
        System.out.print(count);
        br.close();
    }   
}
