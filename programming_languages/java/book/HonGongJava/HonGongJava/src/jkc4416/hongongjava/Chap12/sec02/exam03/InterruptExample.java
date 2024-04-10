package jkc4416.hongongjava.Chap12.sec02.exam03;

public class InterruptExample {
    public static void main(String[] args) {
        Thread thread = new PrintThread2();
        thread.start();

        try {
            Thread.sleep(1000);
        } catch(InterruptedException e) {

        }

        thread.interrupt();  // 스레드를 종료시키기 위해 InterruptedException을 발생시킴
    }
}
