package jkc4416.hongongjava.Chap8.sec02.exam04;
import jkc4416.hongongjava.Chap8.sec02.exam03.*;

public class DriverExample {
    public static void main(String[] args) {
        Driver driver = new Driver();

        Bus bus = new Bus();
        Taxi taxi = new Taxi();

        driver.drive(bus);
        driver.drive(taxi);

    }
}
