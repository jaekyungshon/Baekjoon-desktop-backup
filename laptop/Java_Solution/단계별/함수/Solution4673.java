// Self Number

import java.util.*;

class SelfNumber{
    private int[] numList = new int[10036];
    private StringBuilder sb = new StringBuilder();

    public SelfNumber(){
        for(int i = 0; i < 10036; i++)
            numList[i] = 0;
        checkSelfNum();
    }
    private void checkSelfNum(){
        for(int i = 1; i < 10000; i++){
            if(i < 10){
                numList[i*2] = 1;
            }
            else if(i < 100){
                numList[i+((i/10)+(i%10))] = 1;
            }
            else if(i < 1000){
                numList[i+((i/100)+((i%100)/10)+((i%100)%10))] = 1;
            }
            else if(i < 10000){
                numList[i+((i/1000)+((i%1000)/100)+(((i%1000)%100)/10)+(((i%1000)%100)%10))] = 1;
            }
        }
    }
    public void showSelfNum() {
        for(int i = 1; i < 10000; i++){
            if(numList[i] == 0){
                sb.append(Integer.toString(i)+"\n");
            }
        }
        System.out.println(sb);
    }
}

public class Solution4673 {
    public static void main(String[] args){
        SelfNumber sn = new SelfNumber();
        sn.showSelfNum();
    }    
}
