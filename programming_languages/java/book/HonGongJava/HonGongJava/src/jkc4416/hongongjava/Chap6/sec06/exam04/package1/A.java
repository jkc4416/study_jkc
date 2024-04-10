package jkc4416.hongongjava.Chap6.sec06.exam04.package1;

public class A {
    // Define fields
    A a1 = new A(true);  // 매개변수로 boolean이 들어가는 생성자의 경우 public으로 정의되어 다른 패키지에서도 생성자 호출 가능
    A a2 = new A(1);  // 매개변수로 int가 들어가는 생성자의 경우 default로 정의되어 같은 패키지, 혹은 자식 클래스에서 생성자 호출 가능
    A a3 = new A("Jung");  // 매개변수로 String이 들어가는 생성자의 경우 private으로 정의되어 같은 패키지 및 다른 패키지에서 모두 생성자 호출이 되지 않음!

    // Define constructor
    public A(boolean b) {}  // overloading
    A(int b) {}  // overloading
    private A(String s) {}  // overloading
}
