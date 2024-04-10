package jkc4416.hongongjava.Chap7.sec01.exam01;

public class CellPhone {
    // Define fields
    String model;
    String color;

    // Define constructor
    public CellPhone() {

    }

    // Define methods
    void powerOn() {
        System.out.println("Power on");
    }

    void powerOff() {
        System.out.println("Power off");
    }

    void bell() {
        System.out.println("Ring the bell");
    }

    void sendVoice(String message) {
        System.out.println("Me: " + message);
    }

    void receiveVoice(String message) {
        System.out.println("James: " + message);
    }

    void hangUp() {
        System.out.println("Finish the call");
    }
}
