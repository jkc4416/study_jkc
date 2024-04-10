package jkc4416.hongongjava.Chap12.sec01.exam03;

import java.awt.*;

public class BeepPrintExample3 {
    public static void main(String[] args) {
        Thread thread = new Thread(new Runnable() {
            @Override
            public void run() {
                Toolkit toolkit = Toolkit.getDefaultToolkit();
                for(int i=0; i<5; i++) {
                    toolkit.beep();
                    try {
                        Thread.sleep(500);
                    } catch(Exception e) {

                    }
                }
            }
        });

        thread.start();

        for(int i=0;  i<5; i++) {
            System.out.println("Beep!");
            try {
                Thread.sleep(500);
            } catch(Exception e) {

            }
        }
    }
}
