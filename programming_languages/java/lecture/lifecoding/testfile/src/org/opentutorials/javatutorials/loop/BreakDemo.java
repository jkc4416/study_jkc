package org.opentutorials.javatutorials.loop;

public class BreakDemo {
    public static void main(String[] args) {
        for (int i = 0; i < 20; i++) {
            if (i == 8) {
                break;
            }
            System.out.println("Coding everyday"+i);
        }
    }
}
