package jkc4416.hongongjava.sec01.exam08;

public class SwitchStringExample {
    public static void main(String[] args) {
        String position = "Researcher";

        switch (position) {
            case "Worker":
                System.out.println("$5000");
                break;
            case "Researcher":
                System.out.println("$7000");
                break;
            default:
                System.out.println("$3000");
        }
    }
}

