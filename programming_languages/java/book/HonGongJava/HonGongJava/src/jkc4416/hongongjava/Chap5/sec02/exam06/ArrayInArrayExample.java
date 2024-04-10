package jkc4416.hongongjava.Chap5.sec02.exam06;

public class ArrayInArrayExample {
    public static void main(String[] args) {

        int[][] mathScores = new int[2][3];

        for(int i=0; i<mathScores.length; i++) {
            for(int k=0; k<mathScores[i].length; k++) {
                System.out.println(mathScores[i][k]);
            }
        }
        System.out.println();

        int[][] englishScore = new int[2][];
        englishScore[0] = new int[2];
        englishScore[1] = new int[3];
        for(int i=0; i<englishScore.length; i++) {
            for(int k=0; k<englishScore[i].length; k++) {
                System.out.println(englishScore[i][k]);
            }
        }
        System.out.println();

        int[][] javaScores = { {95, 80}, {92, 96, 80} };
        for(int i=0; i<javaScores.length; i++) {
            for(int k=0; k<javaScores[i].length; k++) {
                System.out.println(javaScores[i][k]);
            }
        }
    }
}
