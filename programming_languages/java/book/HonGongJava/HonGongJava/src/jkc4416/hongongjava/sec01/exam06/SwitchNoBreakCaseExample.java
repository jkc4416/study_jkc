package jkc4416.hongongjava.sec01.exam06;

public class SwitchNoBreakCaseExample {
    public static void main(String[] args) {
        int time = (int) (Math.random() * 4) + 8;
        System.out.println("Time: " + time);

        switch (time) {
            case 8:
                System.out.println("Go to work");
            case 9:
                System.out.println("Start a meeting");
            case 10:
                System.out.println("Working");
            default:
                System.out.println("Working out");
        }
    }
}
