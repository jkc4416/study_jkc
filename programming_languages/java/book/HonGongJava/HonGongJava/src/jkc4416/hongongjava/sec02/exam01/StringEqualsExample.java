package jkc4416.hongongjava.sec02.exam01;

public class StringEqualsExample {
    public static void main(String[] args) {
        String strVar1 = "James";
        String strVar2 = "James";

        if(strVar1==strVar2) {
            System.out.println("Same reference");
        } else {
            System.out.println("Different reference");
        }

        String strVar3 = new String("Jenny");
        String strVar4 = new String("Jenny");

        if(strVar3==strVar4) {
            System.out.println("Same reference");
        } else {
            System.out.println("Different reference");
        }

        if(strVar3.equals(strVar4)) {
            System.out.println("Same string!");
        }
    }
}
