package jkc4416.hongongjava.Chap8.sec02.exam03;

public class VehicleExample {
    public static void main(String[] args) {
        Vehicle vehicle = new Bus();
        vehicle.run();
//        vehicle.checkfare();

        Bus bus = (Bus) vehicle;
        bus.checkFare();
    }
}
