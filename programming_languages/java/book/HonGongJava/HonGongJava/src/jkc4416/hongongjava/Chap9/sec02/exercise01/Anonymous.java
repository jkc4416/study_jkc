package jkc4416.hongongjava.Chap9.sec02.exercise01;

public class Anonymous {
    /*
    Define instance field
     */

    Worker field = new Worker() {
        @Override
        public void start() {
            System.out.println("디자인을 합니다.");
        }
    };

    void method1() {
        Worker localVar = new Worker() {
            @Override
            public void start() {
                System.out.println("개발을 합니다.");
            }
        };

        localVar.start();
    }

    void method2(Worker worker) {
        worker.start();
    }
}
