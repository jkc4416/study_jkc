package jkc4416.hongongjava.sec01.exam07;

public class SwitchCharExample {
    public static void main(String[] args) {
        char grade = 'A';

        switch (grade) {
            case 'A':
            case 'a':
                System.out.println("Grade A");
                break;
            case 'B':
            case 'b':
                System.out.println("Grade B");
                break;
            default:
                System.out.println("Customer");
        }
    }
}
