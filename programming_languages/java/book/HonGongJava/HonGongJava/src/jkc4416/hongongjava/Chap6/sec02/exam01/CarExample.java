package jkc4416.hongongjava.Chap6.sec02.exam01;
import jkc4416.hongongjava.Chap6.sec02.exam01.Car;

public class CarExample {
    public static void main(String[] args) {
        // Create object
        Car myCar = new Car();

        // Read fields
        System.out.println(myCar.company);
        System.out.println(myCar.model);
        System.out.println(myCar.color);
        System.out.println(myCar.maxSpeed);
        System.out.println(myCar.speed);
        System.out.println();

        // Change field value
        myCar.speed = 60;
        System.out.println(myCar.speed);
    }
}
