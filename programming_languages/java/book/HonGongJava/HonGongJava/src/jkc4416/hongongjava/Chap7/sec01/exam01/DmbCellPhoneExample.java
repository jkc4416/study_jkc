package jkc4416.hongongjava.Chap7.sec01.exam01;

public class DmbCellPhoneExample {
    public static void main(String[] args) {
        // Create DmbCellPhone object
        DmbCellPhone dmbCellPhone = new DmbCellPhone("자바폰", "검정", 10);

        // CellPhone 클래스로부터 상속받은 필드
        System.out.println("Model: " + dmbCellPhone.model);
        System.out.println("Color: " + dmbCellPhone.color);

        // DmbCellPhone 클래스의 필드
        System.out.println("Channel: " + dmbCellPhone.channel);

        // CellPhone 클래스로부터 상속받은 메소드
        dmbCellPhone.powerOn();
        dmbCellPhone.bell();
        dmbCellPhone.sendVoice("Hello?");
        dmbCellPhone.receiveVoice("Hi, I am Tom!");
        dmbCellPhone.sendVoice("Can you tell me where is Henry?");
        dmbCellPhone.hangUp();

        // DmbCellPhone 클래스의 메소드 호출
        dmbCellPhone.turnOnDmb();
        dmbCellPhone.changeChannelDmb(77);
        dmbCellPhone.turnOffDmb();
    }
}
