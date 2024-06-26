package jkc4416.hongongjava.Chap8.sec01.exam05;

import jkc4416.hongongjava.Chap8.sec01.exam03.RemoteControl;

public class SmartTelevision implements RemoteControl, Searchable {
    private int volume;

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

    public void search(String url) {
        System.out.println(url + "를 검색합니다!");
    }
}
