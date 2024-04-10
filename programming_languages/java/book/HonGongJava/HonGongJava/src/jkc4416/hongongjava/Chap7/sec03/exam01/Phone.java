package jkc4416.hongongjava.Chap7.sec03.exam01;

public abstract class Phone {
    // Define fields
    public String owner;

    // Define constructor
    public Phone(String owner) {
        this.owner = owner;
    }

    // Define method
    public void turnOn() {
        System.out.println("폰 전원을 켭니다.");
    }

    public void turnOff() {
        System.out.println("폰 전원을 끕니다.");
    }
}
