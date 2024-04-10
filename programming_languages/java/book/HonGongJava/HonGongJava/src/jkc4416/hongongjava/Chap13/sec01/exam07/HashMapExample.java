package jkc4416.hongongjava.Chap13.sec01.exam07;
import java.util.*;

public class HashMapExample {
    public static void main(String[] args) {
        Map<Student, Integer> map = new HashMap<Student, Integer>();

        map.put(new Student(1, "Hong"), 95);
        map.put(new Student(1, "Hong"), 95);
        map.put(new Student(2, "Hong"), 95);
        map.put(new Student(1, "Dong"), 95);

        System.out.println("The number of total entry: " + map.size());
    }
}
