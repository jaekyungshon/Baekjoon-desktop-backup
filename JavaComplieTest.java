import java.io.*;

public class JavaComplieTest {
    public static void main(String[] args) throws IOException{
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write("�ȳ��ϼ��� ���ϴ�!");
        bw.flush();
        bw.close();
    }
}