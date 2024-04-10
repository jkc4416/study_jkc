package jkc4416.hongongjava.Chap7.sec03.exam01;

public class PhoneExample {
    public static void main(String[] args) {
//         Phone phone = new Phone();
        SmartPhone smartPhone = new SmartPhone("홍길동");

        smartPhone.turnOn();
        smartPhone.internetSearch();
        smartPhone.turnOff();
    }
}
