package jkc4416.hongongjava.Chap6.sec04.exam05;
import jkc4416.hongongjava.Chap6.sec04.exam05.*;
public class CarExample {
    public static void main(String[] args) {
        Car myCar = new Car();
        myCar.keyTurnOn();
        myCar.run();
        int speed = myCar.getSpeed();
        System.out.println("현재속도: " + speed + " km/h");
    }
}
