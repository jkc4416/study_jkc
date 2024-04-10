package jkc4416.hongongjava.Chap14.sec02.exam03;

import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.Reader;

public class ReadLineExample {
    public static void main(String[] args) throws Exception {
        Reader reader = new FileReader(
            ReadLineExample.class.getResource("language.txt").getPath()  // --- 매개값으로 입력되는 경로의 경우 해당 클래스의 상대경로 입력!
        );

        BufferedReader br = new BufferedReader(reader);

        while(true) {
            String data = br.readLine();

            if(data == null) {
                break;
            }

            System.out.println(data);
        }

        br.close();

    }
}
