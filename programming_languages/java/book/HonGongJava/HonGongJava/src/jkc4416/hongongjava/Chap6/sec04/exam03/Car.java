package jkc4416.hongongjava.Chap6.sec04.exam03;

public class Car {

    int gas;

    public Car() {

    }

    void setGas(int gas) {
        this.gas = gas;
    }

    boolean isLeftGas() {
        if(this.gas==0) {
            System.out.println("gas가 없습니다.");
            return false;
        }

        System.out.println("gas가 있습니다.");
        return true;
    }

    void run() {
        while(true) {
            if(this.gas>0) {
                System.out.println("달립니다 (gas 잔량: " + this.gas + ")");
                this.gas -= 1;
            } else {
                System.out.println("멈춥니다 (gas 잔량: " + this.gas + ")");
                return;
            }
        }
    }
}
