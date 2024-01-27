// Group Words

import java.io.*;

public class Solution1316 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static int cnt = 0;

    static int[] init(int l){
        int[] tmp = new int[l];
        for(int i = 0; i < l; i++)
            tmp[i] = 0;
        return tmp;
    }

    static void check(char[] s){
        boolean flag = true;
        int[] num = init(123);
        for(int i = 0; i < s.length; i++){
            if(num[(int)s[i]] > 0){
                if(s[i-1] != s[i]){
                    flag = false;
                    break;
                }
            }
            else{
                num[(int)s[i]]++;
            }
        }
        if(flag == true) cnt++;
    }

    public static void main(String[] args) throws IOException{
        int n = Integer.parseInt(br.readLine());
        for(int i = 0; i < n; i++){
            char[] s = br.readLine().toCharArray();
            check(s);
        }
        System.out.println(cnt);
        br.close();
    }    
}
