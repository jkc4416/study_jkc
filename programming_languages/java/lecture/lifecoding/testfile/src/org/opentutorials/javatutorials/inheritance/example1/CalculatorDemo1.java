package org.opentutorials.javatutorials.inheritance.example1;

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

    /*
    상속 시 자식 클래스에서는 정의하지 않은 부모 클래스의 Field와 Method를 사용할 수 있음.
     */

    public SubtractionableCalculator(int left, int right) {
        super(left, right);
    }  // 상속 시 생성자도 새로 정의해줘야 함.

    public void subtract() {
        System.out.println(this.left - this.right);
    }
}

public class CalculatorDemo1 {

    public static void main(String[] args) {
        SubtractionableCalculator c1 = new SubtractionableCalculator(10, 20);
        c1.sum();
        c1.avg();
        c1.subtract();

        SubtractionableCalculator c2 = new SubtractionableCalculator(20, 40);
        c2.sum();
        c2.avg();
        c2.subtract();

    }
}