package org.opentutorials.javatutorials.exception;
import java.io.*;

public class CheckedExceptionDemo {
    public static void main(String[] args) {
        BufferedReader bReader = null;
        try {
            bReader = new BufferedReader(new FileReader("out.txt"));
        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        }
        String input = null;
        try {
            input = bReader.readLine();
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
        System.out.println(input);
    }
}
