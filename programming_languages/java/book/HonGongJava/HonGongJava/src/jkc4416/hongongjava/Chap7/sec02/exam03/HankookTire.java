package jkc4416.hongongjava.Chap7.sec02.exam03;

public class HankookTire extends Tire {
    // Define fields

    // Define constructor
    public HankookTire(String location, int maxRotation) {
        super(location, maxRotation);
    }

    // Define methods
    @Override
    public boolean roll() {
        ++accumulateRotation;

        if(accumulateRotation<maxRotation) {
            System.out.println(location + " HankookTire 수명: " + (maxRotation-accumulateRotation) + "회");
            return true;
        } else {
            System.out.println("*** " + location + " HankookTire 펑크 ***");
            return false;
        }
    }
}
