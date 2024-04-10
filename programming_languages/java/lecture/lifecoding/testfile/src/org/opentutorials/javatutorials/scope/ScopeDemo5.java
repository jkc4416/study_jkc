package org.opentutorials.javatutorials.scope;

public class ScopeDemo5 {

    public static void main(String[] args) {
        for (int i = 0; i < 5; i++) {
            System.out.println(i);
            // for loop에서 정의한 i는 중괄호 내에서만 유효!
        }
    }

//    System.out.println(i);
}
