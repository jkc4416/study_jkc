package org.opentutorials.javatutorials.accessmodifier.inner;

class A {

    public A() {

    }

    public String y() {
        /*
        누구에게나 오픈되어 있는 은행의 창구 역할.
         */
        return "public void y()";
    }

    private String z() {
        /*
        접근제어자가 private인 경우에는 동일 클래스 내부에서만 사용 가능.
        외부 클래스에서 사용하고자 하면 에러 발생.
        허가된 자만 접근 가능한 은행의 금고 역할.
         */
        return "public void z()";
    }

    public String x() {
        /*
        접근제어자가 public인 메서드는 누구에게나 오픈되어 있는 은행의 창구 역할.
        같은 클래스에 속하는 x() 메서드의 경우 z() 메서드를 사용할 수 있음.
         */
        return z();
    }
}


public class AccessDemo1 {
    /*
    A 클래스(은행)의 고객이라고 볼 수 있음.
     */
    public static void main(String[] args) {
        A a = new A();
        System.out.println(a.y());
        System.out.println(a.x());
        // 아래 코드는 오류 발생. z() 메서드는 AccessDemo1에서 사용 불가능한 A 클래스의 private method이므로 직접 사용할 수 없음!
        // System.out.println(a.z());
    }
}
