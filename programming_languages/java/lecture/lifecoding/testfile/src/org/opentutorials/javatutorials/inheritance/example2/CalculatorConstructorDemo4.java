package org.opentutorials.javatutorials.inheritance.example2;

class Calculator {
    int left, right;

    public Calculator(int left, int right) {
        this.left = left;
        this.right = right;
    }

    public void sum() {
        System.out.println(this.left + this.right);
    }

    public void avg() {
        System.out.println((this.left + this.right) / 2);
    }
}

class SubtractionableCalculator extends Calculator {
    public SubtractionableCalculator(int left, int right) {
        super(left, right);
    }

    public void subtraction() {
        System.out.println(this.left - this.right);
    }
}

public class CalculatorConstructorDemo4 {

    public static void main(String[] args) {
        SubtractionableCalculator c1 = new SubtractionableCalculator(10, 20);
        c1.sum();
        c1.avg();
        c1.subtraction();
    }

}
