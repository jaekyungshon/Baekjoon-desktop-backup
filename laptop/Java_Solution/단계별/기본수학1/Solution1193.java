// Find to Math Fractions

import java.io.*;

public class Solution1193 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static int FindRoot(int c, int flag){
        if(flag == 1)
            return (-1+(int)Math.pow(1+8*c, 0.5))/2;
        else
            return -((-1-(int)Math.pow(1+8*c, 0.5))/2);
    }

    static int FindRealRoot(int r1, int r2, int c){
        int sn1 = r1*(r1+1)/2;
        int sn2 = r2*(r2+1)/2;
        if(sn1>=c && sn2>=c) return Math.min(r1, r2);
        else return Math.max(r1, r2);
    }

    public static void main(String[] args) throws IOException{
        int x = Integer.parseInt(br.readLine());
        int n1 = FindRoot(x, 1);
        int n2 = FindRoot(x, 2);

        int n = FindRealRoot(n1, n2, x);
        System.out.println(Integer.toString(n));
        int a1=n-((int)(n*(n+1)/2)-x);
        int a2=1+((int)(n*(n+1)/2)-x);

        if(n % 2 == 0)
            System.out.println(Integer.toString(a1)+"/"+Integer.toString(a2));
        else
            System.out.println(Integer.toString(a2)+"/"+Integer.toString(a1));
        
        br.close();
    }    
}
