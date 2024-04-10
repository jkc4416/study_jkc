package jkc4416.hongongjava.Chap12.sec02.exam05;

public class AutoSaveThread extends Thread{
    public AutoSaveThread() {

    }

    public void save() {
        System.out.println("작업 내용을 저장함.");
    }

    @Override
    public void run() {
        while(true) {
            try {
                Thread.sleep(200);
            } catch(InterruptedException e) {
                break;  // DaemonExample.java의 메인 스레드 종료되면서 InterruptedException 발생 -> 데몬 스레드도 종료됨
            }

            save();

        }
    }
}
