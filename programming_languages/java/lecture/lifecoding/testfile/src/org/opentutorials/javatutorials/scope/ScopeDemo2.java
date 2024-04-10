package org.opentutorials.javatutorials.scope;

public class ScopeDemo2 {
    static int i;  // Class variable (Type of global variable)

    static void a() {
        /*
        Class method
         */
        i = 0;  // 여기서 "int i" 구문으로 변수를 선언하지 않고 위에서 선언한 전역 Class variable을 그대로 사용!
//        int i = 0;  // 이 코드의 경우 메서드 a() 내부에서 새로 i라는 변수를 선언하고 초기화 하고 있음. 이 코드 사용하면 0,1,2,3,4가 정상적으로 출력됨. (맨 위에서 선언한 전역 Class variable과 전혀 무관하다고 볼 수 있음.
    }

    public static void main(String[] args) {
        for (i = 0; i < 5; i ++) {
            a();  // 이 부분에서 계속 i가 0으로 초기화 됨
            System.out.println(i);
        }
    }
}
