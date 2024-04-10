package jkc4416.hongongjava.Chap6.sec06.exam05.package1;

public class A {
    // Define fields
    public int field1;  // 다른 패키지에서도 접근 가능
    int field2;  // 동일 패키지 및 자식 클래스에서 접근 가능
    private int field3;  // 같은 클래스 내에서만 접근 가능

    // Define methods
    public void method1() {}
    void method2() {}
    private void method3() {}

    // Define constructor
    public A() {
        field1 = 1;
        field2 = 1;
        field3 = 1;

        method1();
        method2();
        method3();
    }
}
