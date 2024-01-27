// ASCII Code

import java.util.*;
import java.io.*;

public class Solution11654 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder buf = new StringBuilder();
    public static void main(String[] args) throws IOException{
        String c = br.readLine();
        System.out.println(buf.append(Integer.toString((int)c.charAt(0))));
        br.close();
    }    
}
