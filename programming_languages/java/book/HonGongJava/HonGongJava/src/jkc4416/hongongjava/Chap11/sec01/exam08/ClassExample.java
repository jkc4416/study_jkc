package jkc4416.hongongjava.Chap11.sec01.exam08;

import jkc4416.hongongjava.Chap6.sec02.exam01.Car;

public class ClassExample {
    public static void main(String[] args) throws Exception {
        // 첫 번째 방법
//        Class clazz = Car.class;

        // 두 번째 방법
//        Class clazz = Class.forName("jkc4416.hongongjava.Chap6.sec02.exam01.Car");

        // 세 번째 방법
        Car car = new Car();
        Class clazz = car.getClass();

        System.out.println(clazz.getName());
        System.out.println(clazz.getSimpleName());
        System.out.println(clazz.getPackage().getName());
    }
}
