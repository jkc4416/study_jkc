package jkc4416.hongongjava.Chap6.sec05.exam04;

public class Singleton {
    private static Singleton singleton = new Singleton();  // private 접근제어자를 사용했으므로 클래스 외부에서 접근 불가능

    private Singleton() {
        /*
        생성자 정의
        private 접근제어자를 사용했으므로 클래스 외부에서 접근 불가능
         */
    }

    static Singleton getInstance() {  // 정적 멤버이므로 인스턴스 생성이 없어도 클래스 외부에서 정적 멤버는 접근 가능
        return singleton;
    }
}
