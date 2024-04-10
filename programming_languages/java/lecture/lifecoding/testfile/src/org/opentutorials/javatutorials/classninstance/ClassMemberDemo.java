package org.opentutorials.javatutorials.classninstance;

class C1 {
    static int static_variable = 1;  // static -> Class variable (=Static field)
    int instance_variable = 2;  // instance variable (=Non-static field)

    static void static_static() {
        /*
         Static method
         This is the case where static method access static variable
        */
        System.out.println(static_variable);
    }

    static void static_instance() {  //
        /*
         Static method
         This is the case where static method access to instance variable
         Error 발생!
         Class method는 Instance variable에 접근할 수 없음!
        */
//        System.out.println(instance_variable);
    }

    void instance_static() {
        /*
         Instance method
         This is the case where instance method access to class variable
         */
        System.out.println(static_variable);
    }

    void instance_instance() {
        /*
         Instance method
         This is the case where instance method access to instance variable
         */
        System.out.println(instance_variable);
    }
}


public class ClassMemberDemo {

    public static void main(String[] args) {

        C1 c = new C1();

        c.static_static();  // 1
//        c.static_instance();  // Error
        c.instance_static();  // 1
        c.instance_instance();  // 2
        C1.static_static();  // 1
//        C1.instance_static();  // Error (인스턴스가 생성되지 않은 상황에 인스턴스 메서드를 통해 클래스 변수에 접근하라는 건 말도 안 되는 얘기)
//        C1.instance_instance();  // Error (인스턴스가 생성되지 않은 상황에 인스턴스 메서드를 통해 인스턴스 변수에 접근하라는 건 말도 안 되는 얘기)


    }
}
