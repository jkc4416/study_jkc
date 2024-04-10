package jkc4416.hongongjava.Chap12.sec01.exam01;

import java.awt.*;

public class BeepPrintExample1 {
    public static void main(String[] args) {
        Toolkit toolkit = Toolkit.getDefaultToolkit();

        for(int i=0; i<5; i++) {
            toolkit.beep();
            try {
                Thread.sleep(500);
            } catch(Exception e) {

            }
        }

        for(int i=0; i<5; i++) {
            System.out.println("Beep!");
            try {
                Thread.sleep(500);
            } catch(Exception e) {

            }
        }
    }
}
