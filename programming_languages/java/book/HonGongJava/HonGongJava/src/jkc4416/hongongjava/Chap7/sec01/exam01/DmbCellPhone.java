package jkc4416.hongongjava.Chap7.sec01.exam01;

public class DmbCellPhone extends CellPhone {
    // Define fields
    int channel;

    // Define constructor
    DmbCellPhone(String model, String color, int channel) {
        this.model = model;  // CellPhone 클래스로부터 상속받은 필드
        this.color = color;
    }

    // Define methods
    void turnOnDmb() {
        System.out.println("채널 " + channel + "번 DMB 방송 수신을 시작합니다.");
    }

    void changeChannelDmb(int channel) {
        this.channel = channel;
        System.out.println("채널 " + channel + "번으로 바꿉니다.");
    }

    void turnOffDmb() {
        System.out.println("DMB 방송 수신을 멈춥니다.");
    }
}

