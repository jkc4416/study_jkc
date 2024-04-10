package jkc4416.hongongjava.Chap5.sec02.exercise05;

public class Exercise05 {
    public static void main(String[] args) {
        int[][] array = {
                {95, 86},
                {83, 92, 96},
                {78, 83, 93, 87, 88}
        };

        int sum = 0;
        int len = 0;
        double avg = 0.0;

        // 작성 위치
        for(int i=0; i<array.length; i++) {
            for(int j=0; j<array[i].length; j++) {
                sum += array[i][j];
            }
            len += array[i].length;
        }

        avg = (double) sum / len;

        System.out.println("sum: " + sum);
        System.out.println("avg: " + avg);
    }
}
