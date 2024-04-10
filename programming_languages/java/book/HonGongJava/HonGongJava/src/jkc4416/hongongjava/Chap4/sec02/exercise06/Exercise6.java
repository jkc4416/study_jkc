package jkc4416.hongongjava.Chap4.sec02.exercise06;

public class Exercise6 {
    public static void main(String[] args) {
        for(int i=1; i<5; i++) {

            for(int j=4; j>0; j--) {

                if (i<j) {
                    System.out.print(" ");
                } else {
                    System.out.print("*");
                }
            }

            System.out.println();
        }
    }
}
