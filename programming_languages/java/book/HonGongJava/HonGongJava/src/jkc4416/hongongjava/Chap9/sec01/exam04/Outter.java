package jkc4416.hongongjava.Chap9.sec01.exam04;

public class Outter {
    public void method2(int arg) {
        int localVariable = 1;

        /*
        로컬 클래스에서 매개변수 및 로컬 변수 사용
         */
        class Inner {
            public void method() {
                int result = arg + localVariable;
            }
        }
    }
}
