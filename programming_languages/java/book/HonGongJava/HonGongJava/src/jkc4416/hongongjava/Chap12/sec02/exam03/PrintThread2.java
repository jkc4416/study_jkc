package jkc4416.hongongjava.Chap12.sec02.exam03;

public class PrintThread2 extends Thread{

    public PrintThread2() {

    }

    public void run() {
        try {
            while(true) {
                System.out.println("실행중");
                Thread.sleep(1);
            }
        } catch(InterruptedException e) {

        }

        System.out.println("자원 정리");
        System.out.println("실행 종료");
    }

}
