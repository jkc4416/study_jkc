package org.opentutorials.javatutorials.scope;

public class ScopeDemo6 {
    static int i = 15;  // Class variable

    static void a() {  // Class method
        int i = 10;  // a() 메서드 내에서 정의되는 'i'는 a() 메서드의 유효범위 내에만 존재하므로 b() 메서드의 'i'에 영향을 미치지 못함
        b();
    }

    static void b() {
        System.out.println(i);
    }

    public static void main(String[] args) {
        a();  // Return 5
        b();  // Return 5
    }
}
