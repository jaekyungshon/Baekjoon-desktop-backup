// Rest

import java.util.*;
import java.io.*;

public class Solution3052 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException{
        HashSet<Integer> set = new HashSet<Integer>();
        for(int i = 0; i < 10; i++){
            set.add(Integer.parseInt(br.readLine()) % 42);
        }
        System.out.println(set.size());
    }    
}
