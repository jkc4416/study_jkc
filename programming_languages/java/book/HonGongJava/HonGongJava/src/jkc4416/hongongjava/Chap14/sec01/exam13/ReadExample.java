package jkc4416.hongongjava.Chap14.sec01.exam13;

import java.io.FileReader;
import java.io.Reader;

public class ReadExample {
    public static void main(String[] args) throws Exception {
        Reader reader = new FileReader("test9.txt");

        char[] buffer = new char[5];

        int readCharNum = reader.read(buffer, 2, 3);
        System.out.println("[# INFO] --- 읽은 문자 수: " + readCharNum);

        if(readCharNum != -1) {
            for(int i=0; i<buffer.length; i++) {
                System.out.println(i + "번째 문자: " + buffer[i]);
            }
        }

        reader.close();

    }
}
