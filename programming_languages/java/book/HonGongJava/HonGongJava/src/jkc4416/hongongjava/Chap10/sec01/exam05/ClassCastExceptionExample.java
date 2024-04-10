package jkc4416.hongongjava.Chap10.sec01.exam05;

public class ClassCastExceptionExample {
    public static void main(String[] args) {
        Dog dog = new Dog();
        changeDog(dog);

        Cat cat = new Cat();
        changeDog(cat);
    }

    public static void changeDog(Animal animal) {
        if(animal instanceof Dog) {
            System.out.println("입력된 매개값이 Dog 클래스의 인스턴스임.");
            Dog dog = (Dog) animal;
        } else {
            System.out.println("입력된 매개값이 Dog 클래스의 인스턴스가 아님.");
        }
    }
}

class Animal {}
class Dog extends Animal {}
class Cat extends Animal {}