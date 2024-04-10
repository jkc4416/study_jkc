package org.opentutorials.javatutorials.method;

import java.util.Arrays;

public class ReturnDemo4 {
    public static String[] getMembers() {
        String[] arrMembers = {"Choi", "Han", "Jung", "Hong", "Lee"};
        return arrMembers;
    }

    public static void main(String[] args) {
        String[] arrMembers = getMembers();
        System.out.println(Arrays.toString(arrMembers));
    }
}
