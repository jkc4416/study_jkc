package jkc4416.hongongjava.Chap8.sec01.exam06;
import jkc4416.hongongjava.Chap8.sec01.exam04.Audio;
import jkc4416.hongongjava.Chap8.sec01.exam04.Television;

public class MyClassExample {
    public static void main(String[] args) {
        System.out.println("1)-----------------");
        MyClass myClass1 = new MyClass();
        myClass1.rc.turnOn();
        myClass1.rc.turnOff();

        System.out.println("2)-----------------");
        MyClass myClass2 = new MyClass(new Audio());

        System.out.println("3)-----------------");
        MyClass myClass3 = new MyClass();
        myClass3.methodA();

        System.out.println("3)-----------------");
        MyClass myClass4 = new MyClass();
        myClass4.methodB(new Television());

    }
}
