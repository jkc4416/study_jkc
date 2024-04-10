package jkc4416.hongongjava.Chap11.sec01.exam17;

public class StringReplaceExample {
    public static void main(String[] args) {
        String oldStr = "Java language is object oriented programming! It provides a rich API.";
        String newStr = oldStr.replace("Java", "JAVA");
        System.out.println(oldStr);
        System.out.println(newStr);
    }
}
