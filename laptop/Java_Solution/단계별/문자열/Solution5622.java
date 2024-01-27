// Dial

import java.io.*;

public class Solution5622 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        int cnt = 0;
        char[] list = br.readLine().toCharArray();

        for(int i = 0; i < list.length; i++){
            if(list[i] >= 65 && list[i] <= 67) cnt += 3;
            else if(list[i] >= 68 && list[i] <= 70) cnt += 4;
            else if(list[i] >= 71 && list[i] <= 73) cnt += 5;
            else if(list[i] >= 74 && list[i] <= 76) cnt += 6;
            else if(list[i] >= 77 && list[i] <= 79) cnt += 7;
            else if(list[i] >= 80 && list[i] <= 83) cnt += 8;
            else if(list[i] >= 84 && list[i] <= 86) cnt += 9;
            else cnt += 10;
        }
        System.out.println(cnt);
        br.close();
    }    
}
