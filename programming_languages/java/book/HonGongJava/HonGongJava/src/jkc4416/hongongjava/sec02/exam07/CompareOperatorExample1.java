package jkc4416.hongongjava.sec02.exam07;

public class CompareOperatorExample1 {
    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 10;
        boolean result1 = (num1 == num2);  // true
        boolean result2 = (num1 != num2);  // false
        boolean result3 = (num1 <= num2);  // true
        System.out.println(result1);
        System.out.println(result2);
        System.out.println(result3);

        char char1 = 'A';
        char char2 = 'B';
        boolean result4 = (char1 < char2);  // true
        System.out.println(result4);
    }
}
