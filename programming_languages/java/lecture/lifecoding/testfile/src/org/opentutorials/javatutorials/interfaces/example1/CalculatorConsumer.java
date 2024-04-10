package org.opentutorials.javatutorials.interfaces.example1;

class CalculatorDummy{
    int left, right;

    public CalculatorDummy(int left, int right) {
        this.left = left;
        this.right = right;
    }

    public int sum() {
        return this.left + this.right;
    }

    public double avg() {
        return (double) (this.left + this.right) /2;
    }
}

public class CalculatorConsumer {
    public static void main(String[] args) {
        CalculatorDummy c = new CalculatorDummy(10, 20);
        double varSum, varAvg;

        varSum = c.sum();
        varAvg = c.avg();

        System.out.println(varSum + varAvg);
    }
}
