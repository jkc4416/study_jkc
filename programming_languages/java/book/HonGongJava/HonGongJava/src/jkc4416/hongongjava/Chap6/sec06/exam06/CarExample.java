package jkc4416.hongongjava.Chap6.sec06.exam06;

public class CarExample {
    public static void main(String[] args) {
        Car myCar = new Car();

        // 잘못된 속도 변경
        myCar.setSpeed(-50);
        System.out.println(myCar.getSpeed());

        // 올바른 속도 변경
        myCar.setSpeed(100);
        System.out.println(myCar.getSpeed());

        // 멈춤
        if(!myCar.isStop()) {
            myCar.setStop(true);
        }

        System.out.println(myCar.getSpeed());
    }
}
