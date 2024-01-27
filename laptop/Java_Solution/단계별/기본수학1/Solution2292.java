// Bee Home
/* 
* [Focusing] Bee Home seems like 'Circle'
* => Each of Circles have 6 length of elements
* => So, I got "Sum to AP-Terms Method"
* 
* [Conditions]
* 1) Sum of AP, an = {2*a1+(n-1)*d}/2 = 3n(n+1)
* 2) Include First and Last Layers => 3n(n+1)+1 --- EX) InpudData = 7
* P.S) On the other side, This problem can solve by 'Difference Sequence'
*/

import java.io.*;

public class Solution2292 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException {
        int n = Integer.parseInt(br.readLine());
        if(n == 1) System.out.println(n);
        else{
            for(int i = 0; i < 18259; i++){
                if(3*i*(i+1)+1 >= n){
                    System.out.println(i+1);
                    break;
                }
            }
        }
        br.close();
    }    
}
