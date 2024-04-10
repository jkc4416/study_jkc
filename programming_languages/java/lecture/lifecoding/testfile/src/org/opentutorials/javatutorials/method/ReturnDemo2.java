package org.opentutorials.javatutorials.method;

public class ReturnDemo2 {
    public static String num(int i) {
        if(i == 0) {
            return "zero";
        } else if(i == 1) {
            return "one";
        } else if(i == 2) {
            return "two";
        } else {
            return "I don't know!";
        }
    }

    public static void main(String[] args) {
        String result = num(1);
        System.out.println(result);
    }
}
