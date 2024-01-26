import java.io.*;

public class JavaComplieTest {
    public static void main(String[] args) throws IOException{
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write("안녕하세요 접니다!");
        bw.flush();
        bw.close();
    }
}