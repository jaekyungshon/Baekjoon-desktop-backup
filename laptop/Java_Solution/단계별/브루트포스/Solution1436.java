// Movie Director

import java.io.*;

public class Solution1436 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static boolean check(int num){
        char[] l = Integer.toString(num).toCharArray();
        for(int i = 2; i < l.length; i++){
            if(l[i] == '6'){
                if(l[i-1]=='6' && l[i-2]=='6'){
                    return true;
                }
            }
        }
        return false;
    }
    public static void main(String[] args) throws IOException{
        int n = Integer.parseInt(br.readLine());
        int num=666;
        int cnt=1;

        while(true){
            boolean flag = check(num);
            if(flag == true){
                if(n == cnt) break;
                else cnt++;
            }
            num++;
        }
        System.out.println(num);
        br.close();
    }    
}
