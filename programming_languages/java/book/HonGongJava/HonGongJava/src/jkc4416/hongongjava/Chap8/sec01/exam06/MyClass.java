package jkc4416.hongongjava.Chap8.sec01.exam06;

import jkc4416.hongongjava.Chap8.sec01.exam03.RemoteControl;
import jkc4416.hongongjava.Chap8.sec01.exam04.Audio;
import jkc4416.hongongjava.Chap8.sec01.exam04.Television;

public class MyClass {
    // Define fields
    RemoteControl rc = new Television();

    // Define constructor
    public MyClass() {

    }
    public MyClass(RemoteControl rc) {
        this.rc = rc;
        rc.turnOn();
        rc.turnOff();
    }

    // Define methods
    void methodA() {
        RemoteControl rc = new Audio();
        rc.turnOn();
        rc.turnOff();
    }

    void methodB(RemoteControl rc) {
        rc.turnOn();
        rc.turnOff();
    }
}
