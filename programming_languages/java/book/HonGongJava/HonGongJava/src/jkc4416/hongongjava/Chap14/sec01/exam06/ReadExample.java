package jkc4416.hongongjava.Chap14.sec01.exam06;

import java.io.FileInputStream;
import java.io.InputStream;

public class ReadExample {
    public static void main(String[] args) throws Exception {
        InputStream is = new FileInputStream("test3.db");

        byte[] buffer = new byte[5];

        int readByteNum = is.read(buffer, 2, 3);
        System.out.println("[# INFO] --- 읽은 Byte 수: " + readByteNum);

        if(readByteNum!=-1) {
            for(int i=0; i<buffer.length; i++) {
                System.out.println(i + "번째 배열 요소: " + buffer[i]);
            }
        }

        is.close();
    }
}
