package jkc4416.hongongjava.Chap6.sec05.exam05;


public class PersonExample {
    public static void main(String[] args) {
        Person p1 = new Person("123456-1234567", "Jung");

        System.out.println(p1.nation);
        System.out.println(p1.ssn);
        System.out.println(p1.name);

//        p1.nation = "usa";
//        p1.ssn = "123450-1234560";
        p1.name = "Kim";
    }
}
