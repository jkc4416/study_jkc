package jkc4416.hongongjava.sec02.exam07;

public class WhileSumFrom1To100Example {
    public static void main(String[] args) {
        int sum = 0;
        int i = 0;

        while(i <= 100) {
            sum += i;
            i++;
        }

        System.out.println(sum);
    }
}
