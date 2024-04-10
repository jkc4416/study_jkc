package org.opentutorials.javatutorials.inheritance.example1;

class DivisionableCalculator extends MultiplicationableCalculator {
    public DivisionableCalculator(int left, int right) {
        super(left, right);
    }

    public void division() {
        System.out.println((double)this.left / this.right);
    }
}


public class CalculatorDemo3 {

    public static void main(String[] args) {

        DivisionableCalculator c1 = new DivisionableCalculator(10, 20);
        c1.sum();
        c1.avg();
        c1.subtract();
        c1.multiplication();
        c1.division();
        System.out.println("\n");

        DivisionableCalculator c2 = new DivisionableCalculator(20, 40);
        c2.sum();
        c2.avg();
        c2.subtract();
        c2.multiplication();
        c2.division();

    }
}
