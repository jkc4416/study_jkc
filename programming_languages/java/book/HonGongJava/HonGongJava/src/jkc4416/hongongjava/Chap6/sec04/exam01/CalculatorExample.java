package jkc4416.hongongjava.Chap6.sec04.exam01;
import jkc4416.hongongjava.Chap6.sec04.exam01.*;

public class CalculatorExample {
    public static void main(String[] args) {
        Calculator myCalc = new Calculator(10, 20);
        myCalc.powerOn();

        int result1 = myCalc.plus();
        System.out.println(result1);

        double result2 = myCalc.divide();
        System.out.println(result2);

        myCalc.powerOff();

    }
}
