package jkc4416.hongongjava.Chap14.sec01.exam10;

import java.io.FileWriter;
import java.io.Writer;

public class WriteExample {
    public static void main(String[] args) throws Exception {
        Writer writer = new FileWriter("test10.txt");

        String str = "ABC";

        writer.write(str);

        writer.flush();
        writer.close();

    }
}
