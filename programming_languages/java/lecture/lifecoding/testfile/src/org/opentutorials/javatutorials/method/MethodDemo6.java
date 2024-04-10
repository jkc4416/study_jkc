package org.opentutorials.javatutorials.method;

public class MethodDemo6 {
    public static String numbering(int init, int limit) {
        int i = init;
        String output = "";
        while(i < limit) {
            output += i;
            i++;
        }

        return output;  // return에서 메소드를 반드시 종료!
    }

    public static void main(String[] args) {
        String result = numbering(1, 6);
        System.out.println(result);
    }
}
