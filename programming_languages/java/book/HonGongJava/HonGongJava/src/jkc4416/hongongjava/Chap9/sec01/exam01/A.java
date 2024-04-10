package jkc4416.hongongjava.Chap9.sec01.exam01;

/** 바깥 클래스 **/
public class A {

    // Define constructor
    A() {
        System.out.println("A 객체가 생성됨");
    }

    /** 인스턴스 멤버 클래스**/
    class B {
        // Define constructor
        B() {
            System.out.println("B 객체가 생성됨");
        }
        int field1;
//        static int field2;
        void method1() {
            System.out.println(field1);
        }
//        static void method2() {}
    }

    /** 정적 멤버 클래스 **/
    static class C {

        // Define constructor
        C() {
            System.out.println("C 객체가 생성됨");
        }

        int field1;
        static int field2;

        void method1() {
            System.out.println(field1);
        }

        static void method2() {
            System.out.println(field2);
        }
    }

    void method() {
        /** 로컬 클래스 정의 **/
        class D {
            // Define constructor
            D() {
                System.out.println("D 객체가 생성됨");
            }

            int field1;
//                static int field2;
            void method1() {

            }
//                static void method2() {}
        }

        D d = new D();
        d.field1 = 3;
        d.method1();
    }

}

