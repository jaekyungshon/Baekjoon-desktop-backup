// One-Demension Array
// OX Quiz

import java.io.*;

public class Solution8958 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static char quizList[];

    static void check(int t, int s){
        int tmp = t;
        int score = s;

        for(int i = 0; i < quizList.length; i++){
            if(i == 0){
                if(quizList[i] == 'O'){
                    score += (++tmp);
                }
            }
            else if(quizList[i] == 'O'){
                score += (++tmp);
            }
            else if(quizList[i] != 'O'){
                tmp = 0;
            }
        }
        System.out.println(score);
    }

    public static void main(String[] args) throws IOException{
        int n = Integer.parseInt(br.readLine());
        for(int i = 0; i < n; i++){
            quizList = br.readLine().toCharArray();
            check(0, 0);
        }
        br.close();
    }
}