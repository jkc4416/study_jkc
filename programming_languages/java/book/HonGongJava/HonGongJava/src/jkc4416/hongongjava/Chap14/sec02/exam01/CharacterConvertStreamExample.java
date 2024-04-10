package jkc4416.hongongjava.Chap14.sec02.exam01;

import java.io.*;

public class CharacterConvertStreamExample {
    public static void main(String[] args) throws Exception {
        write("문자 변환 스트림을 사용합니다.");
        String data = read();
        System.out.println(data);
    }

    public static void write(String str) throws Exception {
        FileOutputStream fos = new FileOutputStream("test1.txt");
        Writer writer = new OutputStreamWriter(fos);
        writer.write(str);
        writer.flush();
        writer.close();
    }

    public static String read() throws Exception {
        FileInputStream fis = new FileInputStream("test1.txt");
        FileReader fr = new FileReader("test1.txt");
        Reader reader = new InputStreamReader(fis);
        char[] buffer = new char[100];

        int readCharNum = reader.read(buffer);
        System.out.println("[# INFO] --- 읽은 문자 수: " + readCharNum );

        BufferedReader br = new BufferedReader(fr);

        StringBuilder sb = new StringBuilder();
        String line;

        while ((line = br.readLine()) != null) {
            sb.append(line).append("\n"); // Append each line to the StringBuilder
        }

        System.out.println("[# INFO] --- 읽은 문자열\n");
        System.out.println(sb);

        reader.close();

        String data = new String(buffer, 0, readCharNum);

        return data;
    }
}
