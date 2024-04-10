package jkc4416.hongongjava.Chap11.sec01.exam06;

public class ExitExample {
    public static void main(String[] args) {
        for(int i=0; i<10; i++) {
            if(i==5) {
                System.out.println(i);
                System.exit(0);
                //break;
            }
        }

        System.out.println("마무리 코드");
    }
}
