package jkc4416.hongongjava.Chap6.sec04.exam02;
import jkc4416.hongongjava.Chap6.sec04.exam02.*;
public class ComputerExample {

    public static void main(String[] args) {
        Computer myCom = new Computer();

        int[] values = { 1, 2, 3 };
        int result1 = myCom.sum1(values);
        System.out.println(result1);

        int result2 = myCom.sum1(new int[] { 1, 2, 3, 4, 5});
        System.out.println(result2);

        int result3 = myCom.sum2(1, 2, 3);
        System.out.println(result3);

        int result4 = myCom.sum2(1, 2, 3, 4, 5);
        System.out.println(result4);
    }
}
