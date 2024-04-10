package jkc4416.hongongjava.Chap9.sec01.exam03;

public class A {

    /** Define instance field and method **/
    int field1;
    void method1() {}

    /** Define static field and method **/
    static int field2;
    static void method2() {}

    /** Define instance member class **/
    class B {
        void method() {
            /** 모든 필드와 메소드에 접근 가능 **/
            field1 = 10;
            method1();
            field2 = 10;
            method2();
        }
    }

    static class C {
        void method() {
            /** 인스턴스 필드와 메소드 접근 불가능 **/
//            field1 = 10;
//            method1();
            field2 = 10;
            method2();
        }
    }
}
