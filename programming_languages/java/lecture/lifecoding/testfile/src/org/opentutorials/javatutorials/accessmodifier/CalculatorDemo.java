package org.opentutorials.javatutorials.accessmodifier;

import javax.swing.text.Style;

class Calculators {
    private int left, right;

    public Calculators(int left, int right) {
        this.left = left;
        this.right = right;
    }

    private int _sum() {
        return this.left+this.right;
    }

    public void sumDecoPlus() {
        System.out.println("++++" + _sum() + "++++");
    }

    public void sumDecoMinus() {
        System.out.println("----" + _sum() + "----");
    }
}

public class CalculatorDemo {
    public static void main(String[] args) {
        Calculators c1 = new Calculators(10, 20);
        c1.sumDecoPlus();
        c1.sumDecoMinus();
    }
}
