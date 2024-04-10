package org.opentutorials.javatutorials.abstractclass.example3;

abstract class Calculator{
    int left, right;

    public Calculator(int left, int right) {
        this.left = left;
        this.right = right;
    }

    int _sum() {
        /*
        default 접근제어자를 가지는 메서드.
        default 접근제어자를 가지는 경우 같은 패키지 내에서만 접근 가능.
         */
        return this.left + this.right;
    }

    public abstract void sum();  // 하위 클래스에서 상속하여 구현하도록 강제하는 것이 abstract 클래스!
    public abstract void avg();  // 하위 클래스에서 상속하여 구현하도록 강제하는 것이 abstract 클래스!
    public void run(){
        sum();
        avg();
    }
}

class CalculatorDecoPlus extends Calculator {
    public CalculatorDecoPlus(int left, int right) {
        super(left, right);
    }

    public void sum() {
        System.out.println("+ sum: " + _sum());
    }

    public void avg() {
        System.out.println("+ avg: " + _sum()/2);
    }
}

class CalculatorDecoMinus extends Calculator {
    public CalculatorDecoMinus(int left, int right) {
        super(left, right);
    }

    public void sum() {
        System.out.println("- sum: " + _sum());
    }

    public void avg() {
        System.out.println("- avg: " + _sum()/2);
    }

}

public class CalculatorDemo {
    public static void main(String[] args) {
        CalculatorDecoPlus c1 = new CalculatorDecoPlus(10, 20);
        c1.run();

        CalculatorDecoMinus c2 = new CalculatorDecoMinus(10, 20);
        c2.run();
    }
}
