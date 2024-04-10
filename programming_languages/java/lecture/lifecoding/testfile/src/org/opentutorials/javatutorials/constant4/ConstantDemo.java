package org.opentutorials.javatutorials.constant4;
/*
class Fruit {
    public static final Fruit APPLE = new Fruit();
    public static final Fruit PEACH = new Fruit();
    public static final Fruit BANANA = new Fruit();

}
*/

enum Fruit {
    /*
    위의 주석 처리한 Fruit class와 완전히 동일 (같은 의미를 가짐)
    위의 주석 처리한 코드 작성 패턴이 자주 사용하는 패턴이고 많은 사람들에게 받아들여지는 패턴이기 때문에 자바에서 문법적으로 지원하게 된 것이 enum!
    enum도 클래스!
    단순히 상수로서의 기능만 하는 것이 아니라 그 상수가 어떠한 값을 가질 수 있게 하는 등 더 많은 것을 할 수 있다는 것이 enum형의 장점!
    즉, 열거형 내부에 생성자, 필드, 메소드를 가질 수 있어서 단순히 상수가 아니라 더 많은 역할 가능!
     */
    APPLE("red"), PEACH("pink"), BANANA("yellow");
    private String color;  // 사용자들이 직접 변수를 수정하는 것을 막기 위해 private 사용
    public String getColor() {
        return this.color;
    }
    Fruit(String color) {
        this.color = color;
        System.out.println("Call constructor for " + "'" + this + "'" + " -> " + this.color);
    }
}

enum Company {
    GOOGLE, APPLE, ORACLE
}

public class ConstantDemo {

    public static void main(String[] args) {
        Fruit type = Fruit.APPLE;
        switch(type) {  // switch 문 인자로 들어가는 것이 이미 Fruit 타입이라는 것을 알고 있기 때문에 case 문에서 Label만 조건으로 넣어줘도 됨!
            case APPLE:
                System.out.println(57 + " kcal, color: " + Fruit.APPLE.getColor());
                break;
            case PEACH:
                System.out.println(34 + " kcal, color: " + Fruit.PEACH.getColor());
                break;
            case BANANA:
                System.out.println(93 + " kcal, color: " + Fruit.BANANA.getColor());
                break;
        }

        System.out.println("\n\n");
        for(Fruit f : Fruit.values()) {
            System.out.println(f + ", " + f.getColor());
        }
    }
}
