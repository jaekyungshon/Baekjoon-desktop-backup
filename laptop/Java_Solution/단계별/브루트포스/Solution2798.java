// BlackJack

import java.util.*;
import java.io.*;

public class Solution2798 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static int n,m;
    static int max=-1;
    static Vector<Integer> v = new Vector<Integer>();

    static void InputData(String s, int flag){
        StringTokenizer st = new StringTokenizer(s);
        if(flag == 1){
            n = Integer.parseInt(st.nextToken());
            m = Integer.parseInt(st.nextToken());
        }
        else{
            while(st.hasMoreTokens()){
                v.add(Integer.parseInt(st.nextToken()));
            }
        }
    }

    static void check(){
        for(int i = 0; i < v.size()-2; i++){
            for(int j=i+1; j < v.size()-1; j++){
                for(int k=j+1; k < v.size(); k++){
                    int tmp=v.get(i)+v.get(j)+v.get(k);
                    if(tmp <= m && tmp > max){
                        max=tmp;
                    }
                }
            }
        }
        System.out.println(max);
    }

    public static void main(String[] args) throws IOException{
        InputData(br.readLine(),1);
        InputData(br.readLine(),2);
        check();
        br.close();
    }
}
