package jkc4416.hongongjava.Chap4.sec02.exercise07;

import java.util.Scanner;

public class Exercise7 {
    public static void main(String[] args) {

        boolean run = true;
        int balance = 0;
        int saveMoney = 0;
        int withdrawMoney = 0;
        Scanner scanner = new Scanner(System.in);


        Outter: while(run) {
            System.out.println("-------------------------------------------------------");
            System.out.println(" 1. 예금 | 2. 출금 | 3. 잔고 | 4. 종료 ");
            System.out.println("-------------------------------------------------------");
            System.out.println("선택> ");
            int num = Integer.parseInt(scanner.nextLine());

            switch(num) {
                case 1:
                    System.out.println("예금액> ");
                    saveMoney = Integer.parseInt(scanner.nextLine());
                    break;
                case 2:
                    System.out.println("출금액> ");
                    withdrawMoney = Integer.parseInt(scanner.nextLine());
                    break;
                case 3:
                    System.out.println("잔고> " + (saveMoney-withdrawMoney));
                    break;
                case 4:
                    System.out.println("프로그램 종료");
                    break Outter;
            }

        }
    }
}
