package jkc4416.hongongjava.Chap6.sec04.exam01;

public class Calculator {
    int x;
    int y;

    public Calculator(int x, int y) {
        this.x = x;
        this.y = y;
    }
    void powerOn() {
        System.out.println("전원을 켭니다.");
    }

    int plus() {
        return this.x + this.y;
    }

    double divide() {
        return (double) this.x / this.y;
    }

    void powerOff() {
        System.out.println("전원을 끕니다.");
    }
}
