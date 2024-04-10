package jkc4416.hongongjava.Chap3.sec02.exercise9;

import java.util.Scanner;

public class Exam09 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("The first number: ");
        double num1 = Double.parseDouble(scanner.nextLine());

        System.out.println("The second number: ");
        double num2 = Double.parseDouble(scanner.nextLine());

        System.out.println("--------------------");

        if(num2 != 0.0) {
            System.out.println("결과: " + (num1/num2));
        } else {
            System.out.println("결과: 무한대");
        }
    }
}
