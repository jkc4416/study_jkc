package jkc4416.hongongjava.Chap6.sec06.exam06;

public class Car {
    // Define fields
    private int speed;  // 클래스 외부에서 수정할 수 없도록 private 접근제어자 설정
    private boolean stop=false;  // 클래스 외부에서 수정할 수 없도록 private 접근제어자 설정

    // Define constructor

    // Define methods (메소드를 통해서 private fields에 접근할 수 있도록 메소드는 전부 접근제어자를 public으로 설정)
    public int getSpeed() {
        return speed;
    }

    public void setSpeed(int speed) {
        if(speed<0) {
            this.speed = 0;
            return;
        } else {
            this.speed = speed;
        }
    }

    public boolean isStop() {
        return stop;
    }

    public void setStop(boolean stop) {
        this.stop = stop;
        this.speed = 0;
    }

}

