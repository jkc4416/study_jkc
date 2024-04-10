package jkc4416.hongongjava.Chap7.sec01.exam03;

public class Computer extends Calculator{

    public Computer (double d) {
        super(d);
    }
    @Override
    double areaCircle(double r) {
        System.out.println("Computer 객체의 areaCircle() 실행");

        return Math.PI * r * r;
    }
}
