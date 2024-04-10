package jkc4416.hongongjava.Chap8.sec02.exam05;

public class Example {
    public static void main(String[] args) {
        ImplementationC impl = new ImplementationC();

        InterfaceA ia = impl;  // InterfaceC의 경우 InterfaceA를 상속하기 때문에 자동 타입 변환 가능
        ia.methodA();  // InterfaceA 타입으로 변환되었으므로 InterfaceA의 메소드만 사용 가능
        System.out.println();

        InterfaceB ib = impl;
        ib.methodB();
        System.out.println();

        InterfaceC ic = impl;
        ic.methodA();
        ic.methodB();
        ic.methodC();
    }
}
