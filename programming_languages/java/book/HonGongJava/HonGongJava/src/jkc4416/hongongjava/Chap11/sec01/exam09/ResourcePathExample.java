package jkc4416.hongongjava.Chap11.sec01.exam09;

import jkc4416.hongongjava.Chap8.sec02.exam01.Car;

public class ResourcePathExample {
    public static void main(String[] args) {
        Class clazz = Car.class;

        String photo1Path = clazz.getResource("photo1.jpg").getPath();
        String photo2Path = clazz.getResource("images/photo2.jpg").getPath();

        System.out.println(photo1Path);
        System.out.println(photo2Path);

    }

}