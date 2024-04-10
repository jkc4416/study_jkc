package jkc4416.hongongjava.Chap13.sec01.exam05;

public class Member {

    // Define instance fields
    public String name;
    public int age;

    // Define constructor
    public Member(String name, int age) {
        this.name = name;
        this.age = age;
    }

    @Override
    public boolean equals(Object obj) {
        if(obj instanceof Member) {
            Member member = (Member) obj;
            return member.name.equals(this.name) && (member.age==this.age);
        } else {
            return false;
        }
    }

    @Override
    public int hashCode() {
        return this.name.hashCode() + age;
    }

}
