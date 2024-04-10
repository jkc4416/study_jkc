package jkc4416.hongongjava.Chap14.sec01.exam08;

import java.io.FileWriter;
import java.io.Writer;

public class WriteExample {
    public static void main(String[] args) throws Exception{
        Writer writer = new FileWriter("test8.txt");

        char[] array = { 'A', 'B', 'C' };

        writer.write(array);

        writer.flush();
        writer.close();

    }
}
