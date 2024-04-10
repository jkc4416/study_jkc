package org.opentutorials.javatutorials.overriding.example1;

class Calculator {
    int left, right;

    public Calculator(int left, int right) {
        this.left = left;
        this.right = right;
    }

    public void sum() {
        System.out.println(this.left + this.right);
    }

    public int avg() {
        System.out.println((this.left + this.right) / 2);

        return (this.left + this.right) / 2;
    }

}

class SubtractionableCalculator extends Calculator {
    public SubtractionableCalculator(int left, int right) {
        super(left, right);
    }

    public void sum () {
        System.out.println("실행 결과는 " + (this.left + this.right) + "입니다.");
    }

    public int avg() {
        return super.avg();
        /*
        super --> 자식 클래스가 상속하는 부모 클래스 자체를 의미
        자식 클래스의 avg 메서드에 부모 클래스의 avg와 다른 기능을 넣고 싶다면,
        super.avg()로 부모 클래스 메서드를 먼저 호출한 다음에 추가하고 싶은 로직 추가!
         */
    }
    public void subtract() {
        System.out.println(this.left - this.right);
    }
}


public class CalculatorDemo {
    public static void main(String[] args) {
        SubtractionableCalculator c1 = new SubtractionableCalculator(10, 20);
        c1.sum();
        int varResultAvg = c1.avg();
        c1.subtract();

        System.out.println("\n");
        System.out.println(varResultAvg);
    }
}
