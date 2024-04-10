package jkc4416.hongongjava.sec01.exam05;

public class SwitchExample {
    public static void main(String[] args) {
        int num = (int) (Math.random() * 6) + 1;

        switch(num) {
            case 1:
                System.out.println("Number 1");
                break;
            case 2:
                System.out.println("Number 2");
                break;
            case 3:
                System.out.println("Number 3");
                break;
            case 4:
                System.out.println("Number 4");
                break;
            case 5:
                System.out.println("Number 5");
                break;
            default:
                System.out.println("Number 6");
                break;
        }
    }
}
