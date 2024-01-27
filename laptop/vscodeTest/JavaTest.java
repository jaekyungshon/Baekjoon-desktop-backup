// Java Complie Test

import java.io.*;

public class JavaTest {
    public static void main(String[] args) throws IOException{
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write("Hello World!\n");
        bw.flush();
        bw.close();
    }
}