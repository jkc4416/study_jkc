package jkc4416.hongongjava.Chap9.sec02.exercise01;

public class AnonymousExample {
    public static void main(String[] args) {
        Anonymous anony = new Anonymous();

        anony.field.start();
        anony.method1();
        anony.method2(
                new Worker() {
                    @Override
                    public void start() {
                        System.out.println("테스트를 합니다.");
                    }
                }
        );
    }
}
