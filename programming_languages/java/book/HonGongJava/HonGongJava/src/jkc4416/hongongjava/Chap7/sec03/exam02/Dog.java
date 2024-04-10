package jkc4416.hongongjava.Chap7.sec03.exam02;

public class Dog extends Animal{

    public Dog() {
        this.kind = "포유류";
    }

    @Override
    public void sound() {
        System.out.println("멍멍");
    }
}
