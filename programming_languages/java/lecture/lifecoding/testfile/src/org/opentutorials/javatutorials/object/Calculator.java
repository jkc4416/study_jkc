package org.opentutorials.javatutorials.object;

public class Calculator {

    int left, right;

    public void setOprands(int left, int right) {
        this.left = left;
        this.right = right;
    }

    public void sum() {
        System.out.print(this.left + this.right);
    }

    public void avg() {
        System.out.print((this.left + this.right) / 2);
    }
}
