package org.opentutorials.javatutorials.overloading.example1;

public class OverloadingDemo2 extends OverloadingDemo{
    void A(String arg1, String arg2){
        /*
        Method overloading!
        부모 클래스에 없는 A(String arg1, String arg2) 메서드를 추가!
        같은 이름의 메서드는 부모 클래스에도 있지만 매개변수가 다름!
         */
        System.out.println("sub class: void A(String arg1, String arg2)");
    }

    void A() {
        /*
        Method overriding!
        부모 클래스에 있던 A() 메서드를 새로 정의
         */
        System.out.println("sub class: void A()");
    }

    public static void main(String[] args) {
        OverloadingDemo2 od = new OverloadingDemo2();
        od.A();
        od.A("Coding everyday");
        od.A("Coding everyday", "Coding everybody");
    }
}
