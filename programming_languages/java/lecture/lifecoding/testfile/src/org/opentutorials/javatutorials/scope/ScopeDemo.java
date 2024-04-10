package org.opentutorials.javatutorials.scope;

public class ScopeDemo {

    static void a() {
        int i = 0;  // Type of local variable
    }

    public static void main(String[] args) {
        for (int i = 0; i < 5; i++) {
            System.out.println(i);
            a();
        }
    }
}
