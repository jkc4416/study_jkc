package jkc4416.hongongjava.Chap11.sec01.exam23;

public class AutoBoxingUnBoxingExample {
    public static void main(String[] args) {
        Integer obj = 100;
        System.out.println(obj.intValue());

        int value = obj;
        System.out.println(value);

        int result = obj + 100;
        System.out.println(result);
    }
}
