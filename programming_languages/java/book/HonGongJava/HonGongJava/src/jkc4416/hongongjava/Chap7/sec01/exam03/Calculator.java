package jkc4416.hongongjava.Chap7.sec01.exam03;

public class Calculator {

    double d;

    public Calculator(double d) {
        this.d =d;

    }
    double areaCircle(double r) {
        System.out.println("Calculator 객체의 areaCircle() 실행");

        return 3.14159 * r * r;
    }
}
