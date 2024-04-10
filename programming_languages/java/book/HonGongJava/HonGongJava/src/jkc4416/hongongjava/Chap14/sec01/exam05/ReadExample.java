package jkc4416.hongongjava.Chap14.sec01.exam05;

import java.io.FileInputStream;
import java.io.InputStream;

public class ReadExample {
    public static void main(String[] args) throws Exception {
        InputStream is = new FileInputStream("test2.db");

        byte[] buffer = new byte[100];

        while(true) {
            /*
            buffer 배열에 test2.db에서 읽은 데이터 저장
            is.read(buffer) 실행 시 읽은 바이트 수를 리턴
             */
            int readByteNum = is.read(buffer);

            if (readByteNum == -1) {
                break;
            }

            System.out.println("[# INFO] --- 읽은 바이트 수");
            System.out.println(readByteNum);

            for(int i=0; i<readByteNum; i++) {
                System.out.println(i + "번째 요소: " + buffer[i]);
            }


        }
    }
}
