package jkc4416.hongongjava.Chap5.sec02.exercise06;
import java.util.Scanner;

public class Exercise06 {
    public static void main(String[] args) {
        boolean run = true;
        int studentNum = 0;
        int[] scores = null;  // 배열도 객체! (객체는 null 값으로 초기화 가능)
        Scanner scanner = new Scanner(System.in);
        int max_score = 0;
        double avg_score = 0.0;

        while(run) {
            System.out.println("------------------------------------------------------------");
            System.out.println("1. 학생수 | 2. 점수입력 | 3. 점수리스트 | 4. 분석 | 5. 종료");
            System.out.println("------------------------------------------------------------");
            System.out.println("선택> ");

            int selectNo = Integer.parseInt(scanner.nextLine());

            if(selectNo == 1) {
                // 작성 위치
                studentNum = Integer.parseInt(scanner.nextLine());
                System.out.println("학생수> " + studentNum);
                scores = new int[studentNum];
            } else if(selectNo == 2) {
                // 작성 위치
                for(int i=0; i<studentNum; i++) {
                    System.out.println("scores[" + i + "]> ");
                    scores[i] = Integer.parseInt(scanner.nextLine());
                }
            } else if(selectNo == 3) {
                // 작성 위치
                for(int i=0; i<studentNum; i++) {
                     System.out.println("scores[" + i + "]> " + scores[i]);
                }
            } else if(selectNo == 4) {
                // 작성 위치
                max_score = findMax(scores);
                avg_score = calculateAverage(scores);
                System.out.println("최고 점수: " + max_score);
                System.out.println("평균 점수: " + avg_score);

            } else if(selectNo == 5) {
                run = false;
            }
        }

        System.out.println("프로그램 종료!");

    }

    public static int findMax(int[] array) {
        int max = array[0]; // Start with the first element as the maximum

        for (int i = 1; i < array.length; i++) {
            if (array[i] > max) {
                max = array[i]; // Update max if the current element is greater
            }
        }

        return max;
    }

    public static double calculateAverage(int[] array) {
        int sum = 0;
        for (int value : array) {
            sum += value; // Add each element to sum
        }
        return (double) sum / array.length; // Cast sum to double for floating point division
    }
}
