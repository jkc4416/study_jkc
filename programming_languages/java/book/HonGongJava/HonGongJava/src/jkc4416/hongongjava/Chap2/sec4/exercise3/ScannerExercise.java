package jkc4416.hongongjava.Chap2.sec4.exercise3;
import java.util.Scanner;

public class ScannerExercise {
    public static void main(String[] args) throws Exception{

        Scanner scanner = new Scanner(System.in);

        String name;
        String registrationNumber;
        String phoneNumber;

        System.out.println("[필수 정보 입력]");
        System.out.print("1. 이름: \n");
        name = scanner.nextLine();
        System.out.print("2. 주민번호 앞 6자리: \n");
        registrationNumber = scanner.nextLine();
        System.out.print("3. 전화번호: \n");
        phoneNumber = scanner.nextLine();

        System.out.println("[입력한 내용]");
        System.out.println(name);
        System.out.println(registrationNumber);
        System.out.println(phoneNumber);




    }
}
