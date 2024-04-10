package jkc4416.hongongjava.Chap9.sec01.exam02;

public class A {
    /** Instance field **/
    B field1 = new B();
    C field2 = new C();

    /** Instance method **/
    void method1() {
        B var1 = new B();
        C var2 = new C();
    }

    /** Initialize static fields **/
//    static B field3 = new B();
    static C field4 = new C();

    /** Static method **/
    static void method2() {
//        B var1 = new B();
        C var2 = new C();

    }
    /** Instance member class **/
    class B {}

    /** Static member class **/
    static class C {}
}
