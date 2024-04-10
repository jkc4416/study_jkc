package jkc4416.hongongjava.Chap5.sec02.exam010;

public class AdvancedForExample {
    public static void main(String[] args) {
        int[] scores = {95, 71, 84, 93, 87};
        int sum = 0;

        for(int score : scores) {
            sum = sum + score;
        }
        System.out.println("Total score: " + sum);

        double avg = (double) sum / scores.length;
        System.out.println("Average: " + avg);

    }
}
