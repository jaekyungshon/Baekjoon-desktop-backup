// Taxi

import java.io.*;

public class Solution3053 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException {
        double r = Double.parseDouble(br.readLine());
        System.out.println(String.format("%.6f", Math.PI*r*r));
        System.out.print(String.format("%.6f", 2.0*r*r));
        br.close();
    }
}
