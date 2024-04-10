package jkc4416.hongongjava.Chap6.sec01.exam01;

public class StudentExample {
    public static void main(String[] args) {
        Student s1 = new Student("James");
        System.out.println("s1 variable refer student object.");

        Student s2 = new Student("Jenny");
        System.out.println("s2 variable refer another student object.");
    }
}
