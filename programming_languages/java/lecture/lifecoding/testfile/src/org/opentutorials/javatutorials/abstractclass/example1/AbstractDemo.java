package org.opentutorials.javatutorials.abstractclass.example1;

abstract class A {


    public abstract int b();
    /*
    추상 메소드를 가지는 클래스는 무조건 추상 클래스가 될 수 밖에 없음! (멤버 중에 하나라도 abstract라고 한다면, 그 멤버를 담고 있는 클래스도 무조건 abstract가 됨.)
    또한, 본체가 있는 메소드는 abstract(추상) 키워드를 가질 수 없음.
    즉, public abstract int c(){System.out.println("Hello")} 와 같은 형태가 될 수 없다는 얘기.
    */

    public void d() {
    /*
    단, 추상 클래스 내에는 추상 메소드가 아닌 다른 메소드가 존재할 수 있음.
     */
        System.out.println("world");
    }
}

class B extends A {

    @Override  // 추상 클래스 내 추상 메소드는 반드시 Overriding 해주어야 사용 가능
    public int b() {
        return 0;
    }
}

public class AbstractDemo {
    public static void main(String[] args) {
//        A obj = new A();  // 추상 클래스는 반드시 그것을 상속받은 클래스를 만들어서 그 클래스를 사용해야함. 그냥 사용하려고 하면 에러 발생.
        B obj = new B();


    }
}
