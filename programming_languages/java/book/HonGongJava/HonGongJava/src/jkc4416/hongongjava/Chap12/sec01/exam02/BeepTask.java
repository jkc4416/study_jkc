package jkc4416.hongongjava.Chap12.sec01.exam02;

import java.awt.*;

public class BeepTask implements Runnable{

    public BeepTask() {

    }

    @Override
    public void run() {
        Toolkit toolkit = Toolkit.getDefaultToolkit();
        for(int i=0; i<5; i++) {
            toolkit.beep();
            try {
                Thread.sleep(500);
            } catch (Exception e) {

            }
        }
    }
}
