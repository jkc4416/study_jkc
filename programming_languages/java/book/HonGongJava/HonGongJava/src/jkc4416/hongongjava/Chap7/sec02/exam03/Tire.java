package jkc4416.hongongjava.Chap7.sec02.exam03;

public class Tire {
    // Define fields
    public int maxRotation;
    public int accumulateRotation;
    public String location;

    // Define constructor
    public Tire(String location, int maxRotation) {
        this.location = location;
        this.maxRotation = maxRotation;
    }

    // Define methods
    public boolean roll() {
        ++accumulateRotation;

        if (accumulateRotation < maxRotation) {
            System.out.println(location + " Tire 수명: " + (maxRotation - accumulateRotation) + "회");
            return true;
        } else {
            System.out.println("*** " + location + " Tire 펑크 ***");
            return false;
        }
    }
}
