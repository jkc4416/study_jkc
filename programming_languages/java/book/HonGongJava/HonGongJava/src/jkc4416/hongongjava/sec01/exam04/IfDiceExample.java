package jkc4416.hongongjava.sec01.exam04;

public class IfDiceExample {
    public static void main(String[] args) {
        int num = (int) (Math.random() * 6) + 1;

        if (num==1) {
            System.out.println("Number 1");
        } else if (num==2) {
            System.out.println("Number 2");
        } else if (num==3) {
            System.out.println("Number 3");
        } else if (num==4) {
            System.out.println("Number 4");
        } else if (num==5) {
            System.out.println("Number 5");
        } else {
            System.out.println("Number 6");
        }
    }
}
