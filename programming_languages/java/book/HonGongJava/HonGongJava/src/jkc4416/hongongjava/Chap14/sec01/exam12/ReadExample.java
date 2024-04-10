package jkc4416.hongongjava.Chap14.sec01.exam12;

import java.io.FileReader;
import java.io.Reader;

public class ReadExample {
    public static void main(String[] args) throws Exception {
        Reader reader = new FileReader("test8.txt");

        char[] buffer = new char[100];

        while (true) {
            int readCharNum = reader.read(buffer);

            if(readCharNum == -1) {
                break;
            }

            System.out.println("[# INFO] --- 읽은 문자 수: " + readCharNum);

            for(int i=0; i<readCharNum; i++) {
                System.out.println(i + "번째 요소: " + buffer[i]);
            }
        }

        reader.close();

    }
}
