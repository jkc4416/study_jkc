package org.opentutorials.javatutorials.interfaces.example2;

class CalculatorDummy implements Calculatable{

    double first, second, third;
    public CalculatorDummy(double first, double second, double third) {
        this.first = first;
        this.second = second;
        this.third = third;

    }
    public void setOprands(double first, double second, double third) {
    }

    @Override
    public double avg() {
        return (this.first + this.second + this.third)/3;
    }

    @Override
    public double sum() {
        return this.first + this.second + this.third;
    }
}


public class CalculatorConsumer {
    public static void main(String[] args) {
        CalculatorDummy c = new CalculatorDummy(10, 20, 30);

        double varSum, varAvg;

        varSum = c.sum();
        varAvg = c.avg();

        System.out.println(varSum+varAvg);
    }
}
