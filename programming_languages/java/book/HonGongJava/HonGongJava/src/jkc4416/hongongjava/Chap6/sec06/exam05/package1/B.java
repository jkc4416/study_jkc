package jkc4416.hongongjava.Chap6.sec06.exam05.package1;

public class B {
    // Define constructor
    public B() {
        A a = new A();
        a.field1 = 1;  // public field는 동일 패키지와 다른 패키지에서 모두 접근 가능
        a.field2 = 1;  // default field는 동일 패키지 내에선 접근 가능
//        a.field3 = 1;  // private field는 타 클래스에서 접근 불가능

        a.method1();
        a.method2();

    }
}
