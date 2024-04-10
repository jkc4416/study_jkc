package org.opentutorials.javatutorials.overloading;

class Calculator {
    int left, right;
    int third;

    public Calculator(int left, int right) {
        this.left = left;
        this.right = right;
    }

    public Calculator(int left, int right, int third) {
        /*
        Method overloading!
        메소드의 이름은 동일하나 매개변수가 다름!
         */
        this.left = left;
        this.right = right;
        this.third = third;
    }

    public void sum() {
        System.out.println(this.left + this.right + this.third);
    }

    public void avg() {
        System.out.println((this.left + this.right + this.third) / 3);
    }

}


public class CalculatorDemo {
    public static void main(String[] args) {
        Calculator c1 = new Calculator(10, 20);
        c1.sum();
        c1.avg();
        System.out.println("\n");

        Calculator c2 = new Calculator(10, 20, 60);
        c2.sum();
        c2.avg();


    }
}
