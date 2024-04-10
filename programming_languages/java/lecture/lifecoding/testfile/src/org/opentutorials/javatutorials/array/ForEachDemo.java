package org.opentutorials.javatutorials.array;

public class ForEachDemo {
    public static void main(String[] args) {

        String[] arrMembers = {"Choi", "Jung", "Hong", "Lee", "Lim"};

        for (String ele : arrMembers) {
            System.out.println(ele + "이 상담을 받았습니다.");
        }

    }
}