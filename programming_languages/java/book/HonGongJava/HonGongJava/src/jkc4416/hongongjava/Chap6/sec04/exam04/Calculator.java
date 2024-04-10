package jkc4416.hongongjava.Chap6.sec04.exam04;

public class Calculator {
    int plus(int x, int y) {
        int result = x + y;
        return result;
    }

    double avg (int x, int y) {
        double sum = plus(x, y);
        double result = (double) sum / 2;
        return result;
    }

    void execute() {
        double result = avg(7, 10);
        println(String.valueOf(result));
    }

    void println(String message) {
        System.out.println(message);
    }
}
