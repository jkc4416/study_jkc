package org.opentutorials.javatutorials.array;

public class LengthDemo {
    public static void main(String[] args) {
        String[] arrClassGroup = new String[5];

        arrClassGroup[0] = "Choi";
        System.out.println(arrClassGroup.length);  // 5
        arrClassGroup[1] = "Hong";
        System.out.println(arrClassGroup.length);
        arrClassGroup[2] = "Jung";
        System.out.println(arrClassGroup.length);
        arrClassGroup[3] = "Han";
        System.out.println(arrClassGroup.length);
        arrClassGroup[4] = "Lee";
        System.out.println(arrClassGroup.length);

        System.out.println(arrClassGroup[0]);
        System.out.println(arrClassGroup[1]);
        System.out.println(arrClassGroup[2]);
        System.out.println(arrClassGroup[3]);
        System.out.println(arrClassGroup[4]);

    }
}
