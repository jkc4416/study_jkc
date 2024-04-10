package jkc4416.hongongjava.Chap11.sec01.exam15;

public class StringIndexOfExample {
    public static void main(String[] args) {
        String subject = "Java programming";

        int location = subject.indexOf("programming");
        System.out.println(location);

        if(subject.indexOf("Java") != -1) {
            System.out.println("This book is related to Java programming!");
        } else {
            System.out.println("This book isn't related to Java programming!");
        }
    }
}
