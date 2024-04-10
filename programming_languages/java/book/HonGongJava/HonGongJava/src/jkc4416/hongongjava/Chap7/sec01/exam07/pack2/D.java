package jkc4416.hongongjava.Chap7.sec01.exam07.pack2;
import jkc4416.hongongjava.Chap7.sec01.exam07.pack1.A;

public class D extends A {
    public D() {
        super();  // 부모 클래스 생성자 호출
        this.field = "value";  // 접근제어자가 protected인 부모 클래스 필드 접근 가능 (상속하는 클래스에서는 타 패키지에 있더라도 protected field 호출 가능)
        this.method();  // 접근제어자가 protected인 부모 클래스 필드 접근 가능 (상속하는 클래스에서는 타 패키지에 있더라도 protected method 호출 가능)
    }
}
