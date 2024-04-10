package jkc4416.hongongjava.Chap7.sec01.exam04;

public class SupersonicAirplane extends Airplane{
    public static final int NORMAL = 1;
    public static final int SUPERSONIC = 2;

    public int flyMode = NORMAL;

    @Override
    public void fly() {
        if(flyMode == SUPERSONIC) {
            System.out.println("초음속비행합니다.");
        } else {
            super.fly();  // 부모클래스인 Airplace 클래스의 fly() 메소드 호출!
        }
    }
}
