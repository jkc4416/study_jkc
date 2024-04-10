package jkc4416.hongongjava.Chap12.sec01.exam08;

public class Calculator {
    // Define fields
    private int memory;

    // Define method
    public int getMemory() {
        return memory;
    }

    public synchronized void setMemory(int memory) {
        this.memory = memory;

        try {
            Thread.sleep(2000);
        } catch(Exception e) {

        }

        System.out.println(Thread.currentThread().getName() + ": " + this.memory);
    }
}
