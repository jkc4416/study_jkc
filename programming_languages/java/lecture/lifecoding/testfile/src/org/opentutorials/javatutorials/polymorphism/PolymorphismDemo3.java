package org.opentutorials.javatutorials.polymorphism;

interface I2 {
    public String A();
}

interface I3 {
    public String B();
}

class D implements I2, I3 {
    public String A() {
        return "A";
    }

    public String B() {
        return "B";
    }
}

public class PolymorphismDemo3 {
    public static void main(String[] args) {
        D obj = new D();  // obj라는 인스턴스는 데이터타입이 D이므로 클래스 D가 정의하고 있는 모든 멤버를 사용할 수 있음.
        I2 objI2 = new D();
        /*
        objI2라는 클래스 D의 인스턴스가 마치 자기가 데이터타입이 I2인 것처럼 행동 한다고 보면 됨.
        I2는 메소드 A만 가지고 있으므로 여기서 인스턴스 objI2도 마치 자기가 메소드 A만 가질 수 있는 것처럼 행동!
         */
        I3 objI3 = new D();
        /*
        objI3라는 클래스 D의 인스턴스가 마치 자기가 데이터타입이 I3인 것처럼 행동 한다고 보면 됨.
        I3는 메소드 B만 가지고 있으므로 여기서 인스턴스 objI3도 마치 자기가 메소드 B만 가질 수 있는 것처럼 행동!
         */
        obj.A();
        obj.B();

        objI2.A();
        // objI2.B();  // 에러 발생 -> objI2는 메소드 A만 가질 수 있는 것처럼 행동

        // objI3.A();  // 에러 발생 -> objI3는 메소드 B만 가질 수 있는 것처럼 행동
        objI3.B();
    }
}
