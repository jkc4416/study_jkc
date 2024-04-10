package jkc4416.hongongjava.Chap13.sec02.exam01;


import java.util.Stack;

public class StackExample {
    public static void main(String[] args) {
        Stack<Coin> coinBox = new Stack<Coin>();

        coinBox.push(new Coin(100));
        System.out.println("100원짜리 동전을 넣었습니다.");
        coinBox.push(new Coin(50));
        System.out.println("50원짜리 동전을 넣었습니다.");
        coinBox.push(new Coin(500));
        System.out.println("500원짜리 동전을 넣었습니다.");
        coinBox.push(new Coin(10));
        System.out.println("10원짜리 동전을 넣었습니다.");
        System.out.println();

        System.out.println("동전을 위에서부터 순서대로 가져옵니다.");
        while(!coinBox.isEmpty()) {
            Coin coin = coinBox.pop();
            System.out.println("꺼내온 동전: " + coin.getValue() + "원");
        }
    }
}
