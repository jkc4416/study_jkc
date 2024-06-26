package org.opentutorials.javatutorials.polymorphism;

abstract class Calculator {
    int left, right;

    public void setOprands(int left, int right) {
        this.left = left;
        this.right = right;
    }

    int _sum() {
        return this.left + this.right;
    }

    public abstract void sum();
    public abstract void avg();
    public void run() {
        sum();
        avg();
    }
}

class CalculatorDecoPlus extends Calculator {
    public void sum() {
        System.out.println("+ sum: " + _sum());
    }
    public void avg() {
        System.out.println("+ avg: " + _sum()/2);
    }
}

class CalculatorDecoMinus extends Calculator {
    public void sum() {
        System.out.println("- sum: " + _sum());
    }
    public void avg() {
        System.out.println("- avg: " + _sum()/2);
    }
}

public class CalculatorDemo {

    public static void execute(Calculator cal) {
        System.out.println("실행결과");
        cal.run();
    }

    public static void main(String[] args) {
        Calculator c1 = new CalculatorDecoPlus();
        c1.setOprands(10, 20);
        Calculator c2 = new CalculatorDecoMinus();
        c2.setOprands(20, 40);

        execute(c1);
        execute(c2);
    }
}
