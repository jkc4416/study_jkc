package org.opentutorials.javatutorials.polymorphism;

class O {
    public void a (int param) {
        System.out.println("숫자출력");
        System.out.println(param);
    }

    public void a (String param) {
        /*
        Method overloading!
        메소드 이름 동일, 매개변수 다름.
         */
        System.out.println("문자출력");
        System.out.println(param);
    }
}

public class PolymorphismOverloadingDemo {
    public static void main(String[] args) {
        O o = new O();
        o.a(2);
        o.a("Hello");
    }
}
