package org.opentutorials.javatutorials.inheritance.example1;

class MultiplicationableCalculator extends SubtractionableCalculator {

    public MultiplicationableCalculator(int left, int right) {
        super(left, right);
    }

    public void multiplication() {
        System.out.println(this.left * this.right);
    }

}


public class CalculatorDemo2 {

    public static void main(String[] args) {

        MultiplicationableCalculator c1 = new MultiplicationableCalculator(10, 20);
        c1.sum();
        c1.avg();
        c1.subtract();
        c1.multiplication();
        System.out.println("\n");

        MultiplicationableCalculator c2 = new MultiplicationableCalculator(20, 40);
        c2.sum();
        c2.avg();
        c2.subtract();
        c2.multiplication();
    }
}
