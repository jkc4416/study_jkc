package jkc4416.hongongjava.Chap8.sec01.exam05;

import jkc4416.hongongjava.Chap8.sec01.exam03.RemoteControl;

public class SmartTelevisionExample {

    public static void main(String[] args) {
        SmartTelevision tv = new SmartTelevision();

        RemoteControl rc = tv;
        rc.turnOn();
        rc.setVolume(5);
        Searchable searchable = tv;
        searchable.search("google.co.kr");
        rc.turnOff();
    }
}
