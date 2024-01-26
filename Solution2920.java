// Ascending

import java.io.*;
import java.util.*;

public class Solution2920 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        StringTokenizer st = new StringTokenizer(br.readLine());
        int before = -1;
        int check=0;
        while(st.hasMoreTokens()){
            int tmp = Integer.parseInt(st.nextToken());
            if(before == -1){
                before = tmp;
            }
            else if(before+1 == tmp){
                before = tmp;
                continue;
            }
            else if(before-1 == tmp){
                before = tmp;
                check=1;
            }
            else{
                check = -1;break;
            }
        }
        if(check == 1) System.out.println("descending");
        else if(check == 0) System.out.println("ascending");
        else System.out.println("mixed");
    }
}
