package jkc4416.hongongjava.Chap7.sec01.exam03;

public class ComputerExample {
    public static void main(String[] args) {
        double r = 10.0;

        Calculator calculator = new Calculator(0.0);
        System.out.println("Area of a circle: " + calculator.areaCircle(r));
        System.out.println();

        Computer computer = new Computer(0.0);
        System.out.println("Area of a circle: " + computer.areaCircle(r));

    }
}
