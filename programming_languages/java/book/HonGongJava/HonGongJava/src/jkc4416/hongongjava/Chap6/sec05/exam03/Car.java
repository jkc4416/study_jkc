package jkc4416.hongongjava.Chap6.sec05.exam03;

public class Car {
    int speed;

    void run() {
        System.out.println(speed);
    }

    public static void main(String[] args) {
        Car myCar = new Car();
        myCar.speed = 60;
        myCar.run();
    }
}
