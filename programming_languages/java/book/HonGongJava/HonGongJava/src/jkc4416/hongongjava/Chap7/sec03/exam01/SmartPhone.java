package jkc4416.hongongjava.Chap7.sec03.exam01;

public class SmartPhone extends Phone{
    // Constructor
    public SmartPhone(String owner) {
        super(owner);
    }

    // Methods
    public void internetSearch() {
        System.out.println("인터넷 검색을 합니다.");
    }
}
