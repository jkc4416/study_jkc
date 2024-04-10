package jkc4416.hongongjava.Chap14.sec01.exam03;

import java.io.FileOutputStream;
import java.io.OutputStream;

public class WriteExample {
    public static void main(String[] args) throws Exception {
        OutputStream os = new FileOutputStream("test3.db");

        byte[] array = { 10, 20, 30, 40, 50 };

        os.write(array, 1, 3);

        os.flush();
        os.close();

    }
}
