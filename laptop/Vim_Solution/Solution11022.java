// A+B -8

import java.util.*;
import java.io.*;

public class Solution11022 {

	public static void main(String[] args) throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int loopCnt = Integer.parseInt(br.readLine());
		for(int i = 1; i <= loopCnt; i++){
			String s = br.readLine();
			StringTokenizer st = new StringTokenizer(s);

			int a = Integer.parseInt(st.nextToken());
			int b = Integer.parseInt(st.nextToken());
			String sa = Integer.toString(a);
			String sb = Integer.toString(b);

			bw.write("Case #"+Integer.toString(i)+": ");
			bw.write(sa+" + "+sb+" = "+Integer.toString(a+b)+"\n");
			bw.flush();
		}
		bw.close();
		br.close();
	}

}
