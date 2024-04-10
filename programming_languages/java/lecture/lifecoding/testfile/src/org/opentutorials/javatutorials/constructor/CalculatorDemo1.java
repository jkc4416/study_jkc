package org.opentutorials.javatutorials.constructor;

class Calculator {
    int left, right;

    public Calculator(int left, int right) {
        /*
         Class 이름과 동일한 이름의 메서드 (초기화) & Parameter를 입력 받음!
         이를 생성자(Constructor)라고 부름.
         생성자를 정의함으로써 클래스 사용자가 놓치지 않아야 할 부분을 챙기도록 자연스럽게 만들 수 있음.
         */
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

public class CalculatorDemo1 {

    public static void main(String[] args) {

        Calculator c1 = new Calculator(10, 20);  // 생성자 (인스턴스를 생성)
        c1.avg();
        c1.sum();

        Calculator c2 = new Calculator(20, 40);  // 생성자 (인스턴스를 생성)
        c1.avg();
        c1.sum();

    }
}
