// Quick A+B

import java.io.*;
import java.util.*;

public class Solution15552 {
	
	public static void main(String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		int loopCnt = Integer.parseInt(r.readLine());
		for(int i = 0; i < loopCnt; i++){
			String s = r.readLine();
			StringTokenizer st = new StringTokenizer(s);

			int a = Integer.parseInt(st.nextToken());
			int b = Integer.parseInt(st.nextToken());
			// s.split(' ')
			bw.write(Integer.toString(a+b)+"\n");
			bw.flush();
		}
		bw.close();
	}

}
