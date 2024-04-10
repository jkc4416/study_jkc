package jkc4416.hongongjava.sec02.exam10;

public class AssignmentOperatorExample {
    public static void main(String[] args) {
        int result = 0;
        result += 10;
        System.out.println(result);  // 10

        result -= 5;
        System.out.println(result);  // 5

        result += 3;
        System.out.println(result);  // 8

        result /= 5;
        System.out.println(result);  // 1

        result %= 3;
        System.out.println(result);  // 1
    }
}
