package jkc4416.hongongjava.Chap12.sec02.exam01;

import java.awt.*;

public class SleepExample {
    public static void main(String[] args) {
        Toolkit toolkit = Toolkit.getDefaultToolkit();
        for(int i=0; i<10; i++) {
            toolkit.beep();

            try {
                Thread.sleep(3000);
            } catch(InterruptedException e) {

            }
        }
    }
}
