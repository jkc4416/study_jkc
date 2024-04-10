package jkc4416.hongongjava.Chap11.sec01.exam16;

public class StringLengthExample {
    public static void main(String[] args) {
        String ssn = "7306241230123";
        int length = ssn.length();
        if(length == 13) {
            System.out.println("The length of ssn is correct!");
        } else {
            System.out.println("The legnth of ssn is not correct!");
        }
    }
}
