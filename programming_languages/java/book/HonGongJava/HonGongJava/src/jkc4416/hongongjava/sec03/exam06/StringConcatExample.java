package jkc4416.hongongjava.sec03.exam06;

public class StringConcatExample {
    public static void main(String[] args) {
        int value = 10 + 2 + 8;
        System.out.println(value);

        String str1 = 10 + 2 + "8";
        System.out.println(str1);

        String str2 = 10 + "2" + 8;
        System.out.println(str2);

        String str3 = "10" + 2 + 8;
        System.out.println(str3);

        String str4 = "10" + (2 + 8);
        System.out.println(str4);
    }
}
