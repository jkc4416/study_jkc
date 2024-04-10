package org.opentutorials.javatutorials.exception;

class DivideException extends Exception {

    public int left, right;

    DivideException() {
        super();
    }

    DivideException(String message) {
        super(message);
    }

    DivideException(String message, int left, int right) {
        super(message);
        this.left = left;
        this.right = right;
    }
}


class Calculator {

    int left, right;

    public Calculator(int left, int right) {
        /*
        Define constructor
         */
        this.left = left;
        this.right = right;

//        if (this.right == 0) {
//            throw new IllegalArgumentException("두 번째 인자는 0을 허용하지 않습니다.");  // Exception을 직접 발생시키는 방법!
//        }
    }

    public void divide() throws DivideException{

        if (this.right == 0) {
//            throw new ArithmeticException("0으로 나눌 수 없습니다.");
            throw new DivideException("0으로 나눌 수 없습니다.", this.left, this.right);
        }

        try {
            System.out.println("계산 결과는 ");
            System.out.println(this.left / this.right);
            System.out.println("입니다.");
        } catch(Exception e) {
            System.out.println("***** 에러 발생: " + e.getMessage());
            System.out.println("\n\ne.getMessage()\n" + e.getMessage());  // 가장 간단한 메시지 표시
            System.out.println("\n\ne.toString()" + e.toString());  // 조금 더 자세한 메시지 표시
            System.out.println("\n\ne.printStackTrace()");
//            e.printStackTrace();  // 가장 자세한 메시지 표시
        }

        System.out.println("Divide end");  // 위에서 예외 발생 시 try-catch 문 끝나고 실행이 중단되는 것이 아니라 catch 구문 실행 후 밖으로 나와서 나머지 로직들이 실행됨.
    }

    @Override
    public String toString() {
        return super.toString() + "\nleft: " + this.left + ", right: " + this.right;
    }
}
public class CalculatorDemo {
    public static void main(String[] args) {

        Calculator c = null;
        try {
            c = new Calculator(10, 0);
            c.divide();
        } catch (DivideException e) {
            System.out.println(e.getMessage());
            System.out.println(e.left);
            System.out.println(e.right);
        } catch (IllegalArgumentException | ArithmeticException e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println(c.toString());
        }
    }
}
