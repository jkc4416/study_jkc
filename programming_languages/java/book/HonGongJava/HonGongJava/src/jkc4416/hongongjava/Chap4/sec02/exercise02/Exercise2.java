package jkc4416.hongongjava.Chap4.sec02.exercise02;

public class Exercise2 {
    public static void main(String[] args) {

        int sum = 0 ;

        for (int i=0; i<=100; i++) {
            if(i%3 == 0) {
                sum += i;
            }
        }

        System.out.println(sum);

    }
}
