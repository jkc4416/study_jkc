package jkc4416.hongongjava.Chap8.sec01.exam03;

public interface RemoteControl {
    // Define constants
    public int MAX_VOLUME = 10;
    public int MIN_VOLUME = 0;

    // Define abstract method (메소드 선언부만 작성)
    public void turnOn();
    public void turnOff();
    public void setVolume(int volume);
}
