package jkc4416.hongongjava.Chap6.sec05.exam04;
import jkc4416.hongongjava.Chap6.sec05.exam04.*;

public class SingletonExample {
    public static void main(String[] args) {
        Singleton obj1 = Singleton.getInstance();
        Singleton obj2 = Singleton.getInstance();

        if(obj1==obj2) {
            System.out.println("Same singleton object!");
        } else {
            System.out.println("Different singleton object!");
        }
    }
}
