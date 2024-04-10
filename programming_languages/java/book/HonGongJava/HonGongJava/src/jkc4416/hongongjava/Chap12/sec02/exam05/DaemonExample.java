package jkc4416.hongongjava.Chap12.sec02.exam05;

public class DaemonExample {
    public static void main(String[] args) {
        AutoSaveThread autoSaveThread = new AutoSaveThread();
        autoSaveThread.setDaemon(true);
        autoSaveThread.start();

        try {
            Thread.sleep(3000);
        } catch(InterruptedException e) {

        }

        System.out.println("메인 스레드 종료");  // 메인 스레드 종료되면서 InterruptedException 발생 -> 데몬 스레드도 종료됨
    }
}
