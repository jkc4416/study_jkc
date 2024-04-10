package org.opentutorials.javatutorials.conditionaloperator;

public class AndDemo {
    public static void main(String[] args) {
        if (true && true) {  // true
            System.out.println(1);
        }

        if (true && false) {  // false
            System.out.println(2);
        }

        if (false && true) {  // false
            System.out.println(3);
        }

        if (false && false) {  // false
            System.out.println(4);
        }
    }
}
