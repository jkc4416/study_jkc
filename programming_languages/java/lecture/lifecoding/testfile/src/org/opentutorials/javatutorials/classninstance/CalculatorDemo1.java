package org.opentutorials.javatutorials.classninstance;

class Calculator {
    static double PI = 3.141592;  // static -> Class variable
    int left, right;

    public void setOprands(int left, int right) {
        this.left = left;
        this.right = right;
    }

    public void sum() {
        System.out.println(this.left + this.right);
    }

    public  void avg() {
        System.out.println((this.left + this.right) / 2);
    }
}

public class CalculatorDemo1 {
    public static void main(String[] args) {
        Calculator c1 = new Calculator();
        c1.setOprands(10, 20);
        c1.sum();
        c1.avg();
        System.out.println(c1.PI);

        Calculator c2 = new Calculator();
        c2.setOprands(20, 40);
        c2.sum();
        c2.avg();
        System.out.println(c2.PI);

        System.out.println(Calculator.PI);
    }
}
