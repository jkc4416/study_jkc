package org.opentutorials.javatutorials.polymorphism;

class A{
    public String x() {
        return "A.x";
    }
}

class B extends A{
    public String x() {
        return "B.x";
    }

    public String y() {
        return "y";
    }
}

class B2 extends A {
    public String x() {
        return "B2.x";
    }
}

public class PolymorphismDemo1 {
    public static void main(String[] args) {
        A obj = new B();
        A obj2 = new B2();

        String var_x, var_y;
        var_x = obj.x();
//        var_y = obj.y();  // 에러 발생

        System.out.println(var_x);

        System.out.println(obj2.x());
    }
}
