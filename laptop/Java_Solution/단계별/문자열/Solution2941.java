// Croatia Alphabet

import java.io.*;

public class Solution2941 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static int[] lenArr = {2, 2, 3, 2, 2, 2, 2, 2};
    static char[][] cro = {
        {'c','='}, {'c','-'}, {'d','z','='}, {'d','-'}, {'l','j'}, {'n','j'}, {'s','='},{'z','='}
    };
    static char[] arr;
    static int cnt = 0;
    static boolean flag = true;

    static int check(int start){
        int idx;
        // Loop - Croatia Alpha List 
        for(int i = 0; i < 8; i++){
            flag = true;
            idx = 0;
            // Loop - Input Arr - CharArray
            for(int j = start; j < start+lenArr[i]; j++){
                // Checking - Current Alpha equals Croatia Alpha
                if(j > arr.length){
                    break;
                }
                else if(arr[j] != cro[i][idx++]){
                    flag = false;
                    break;
                }
            }
            if(flag == true){
                cnt++;
                return start+lenArr[i];
            }
        }
        cnt++;
        return start+1;
    }
    public static void main(String[] args) throws IOException{
        arr = br.readLine().toCharArray();
        for(int i = 0; i < arr.length; )
            // Loop to Input CharArray
            i = check(i);
        System.out.println(cnt);
        br.close();
    }    
}
