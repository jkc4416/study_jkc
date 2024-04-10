package jkc4416.hongongjava.Chap13.sec01.exam05;

import java.util.HashSet;
import java.util.Set;

public class HashSetExample2 {
    public static void main(String[] args) {
        Set<Member> set = new HashSet<Member>();

        set.add(new Member("홍길동", 30));
        set.add(new Member("홍길동", 30));
        set.add(new Member("홍길동", 40));
        set.add(new Member("고길동", 30));

        System.out.println("총 객체수: " + set.size());
    }
}
