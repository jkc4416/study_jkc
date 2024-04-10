package org.opentutorials.javatutorials.inheritance.example3;

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
    public  SubtractionableCalculator(int left, int right) {
        super(left, right);  // super 자체는 부모 클래스를 의미함. super()는 부모 클래스의 생성자를 의미함. --> 이 코드 라인에서 부모 클래스의 초기화를 진행했다고 보면 됨.
        /*
         만약 자식 클래스(하위 클래스)의 초기화가 필요하다면 부모 클래스의 초기화를 먼저 시키고, 그 아래에서 자식 클래스의 초기화를 진행해야 함.
         즉, 항상 하위 클래스의 초기화 관련 코드는 super() 아래에 위치해야 함. 안그러면 오류 발생!
         하위 클래스가 인스턴스화 된다는 것은 곧 상위 클래스가 이미 인스턴스화 되었다는 뜻이 됨. 즉, 상위 클래스의 초기화가 끝나야만 하위 클래스의 초기화가 가능하다는 얘기.
         */
    }

    public void subtract() {
        System.out.println(this.left - this.right);
    }
}


public class CalculatorConstructorDemo5 {

        public static void main(String[] args) {
            SubtractionableCalculator c1 = new SubtractionableCalculator(10, 20);
            c1.sum();
            c1.avg();
            c1.subtract();
        }
}
