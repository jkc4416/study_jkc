package org.opentutorials.javatutorials.array;

public class ArrayLoopDemo {
    public static void main(String[] args) {

        String[] arrMembers = {"Choi", "Hong", "Jung"};

        for (int i = 0; i < arrMembers.length; i++) {
            String eleMember = arrMembers[i];
            System.out.println(eleMember + "이 상담을 받았습니다.");
        }
    }
}
