package jkc4416.hongongjava.Chap6.sec06.exam05.package2;
import jkc4416.hongongjava.Chap6.sec06.exam05.package1.*;

public class C {
    // Define constructor
    public C() {
        A a = new A();  // 생성자의 접근제어자가 public이어서 호출 가능
        a.field1 = 1;  // field1의 접근제어자만 public이므로 field1만 타 패키지에서 접근 가능
        a.method1();  // method1의 접근제어자만 public이므로 method1만 타 패키지에서 접근 가능
    }
}
