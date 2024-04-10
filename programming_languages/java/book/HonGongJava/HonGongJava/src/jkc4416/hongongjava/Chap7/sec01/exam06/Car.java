package jkc4416.hongongjava.Chap7.sec01.exam06;

public class Car {
    // Define fields
    public int speed;

    // Define methods
    public void speedUp() {
        speed += 1;
    }

    public final void stop() {
        System.out.println("차를 멈춤");
        speed = 0;
    }
}
