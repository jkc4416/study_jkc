package jkc4416.hongongjava.Chap7.sec02.exam02;

public class ChildExample {
    public static void main(String[] args) {
        Child child = new Child();

        Parent parent = child;
        parent.method1();   // Child 클래스에서 재정의 되지 않았으므로 부모 클래스의 "Parent-method1()"이 출력됨
        parent.method2();   // Child 클래스에서 재정의 되었으므로 "Child-method2()"가 출력됨
//        parent.method3();
    }
}
