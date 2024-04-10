package org.opentutorials.javatutorials.loop;

public class ContinueDemo {
    public static void main(String[] args) {
        for (int i = 0; i < 20; i++) {
            if (i == 7) {
                continue;
            }
            System.out.println("Coding everyday " + i);
        }
    }
}
