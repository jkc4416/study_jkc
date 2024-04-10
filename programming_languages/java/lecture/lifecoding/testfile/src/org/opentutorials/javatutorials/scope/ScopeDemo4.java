package org.opentutorials.javatutorials.scope;

public class ScopeDemo4 {
    static void a() {
        String title = "Coding everyday!";
    }
    public static void main(String[] args) {
        a();
//        System.out.print(title);
    }
}
