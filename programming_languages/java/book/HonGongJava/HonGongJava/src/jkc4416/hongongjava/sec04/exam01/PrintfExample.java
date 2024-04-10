package jkc4416.hongongjava.sec04.exam01;

public class PrintfExample {
    public static void main(String[] args) {
        int value = 123;
        System.out.printf("Price of the product: %d Won\n", value);
        System.out.printf("Price of the product: %6d Won\n", value);
        System.out.printf("Price of the product: %-6d Won\n", value);
        System.out.printf("Price of the product: %06d Won\n", value);

        double area = 3.141592 * 10 * 10;
        System.out.printf("반지름이 %d인 원의 넓이: %10.2f\n", 10, area);

        String name = "홍길동";
        String job = "도적";
        System.out.printf("%6d | %-10s | %10s\n", 1, name, job);
    }
}
