package jkc4416.hongongjava.Chap8.sec01.exam04;

import jkc4416.hongongjava.Chap8.sec01.exam03.RemoteControl;

public class Television implements RemoteControl {
    // Define fields
    private int volume;

    // Define turnOn() method
    public void turnOn() {
        System.out.println("TV를 켭니다.");
    }

    public void turnOff() {
        System.out.println("TV를 끕니다.");
    }

    public void setVolume(int volume) {
        if(volume>RemoteControl.MAX_VOLUME) {
            this.volume = RemoteControl.MAX_VOLUME;
        } else if(volume<RemoteControl.MIN_VOLUME) {
            this.volume = RemoteControl.MIN_VOLUME;
        } else {
            this.volume = volume;
        }

        System.out.println("현재 TV 볼륨: " + this.volume);
    }
}
