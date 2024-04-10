package jkc4416.hongongjava.Chap9.sec02.exam04;

public class Anonymous {
    private int field;

    public void method(final int arg1, int arg2) {
        final int var1 = 0;  // 익명 객체 내부에서 메소드의 매개변수나 로컬 변수 사용 시 로컬 변수 final 특성 직접 부여 필요 (자바 7 이전)
        int var2 = 0;  //  익명 객체 내부에서 메소드의 매개변수나 로컬 변수 사용 시 자바 8 이후부터는 로컬 변수 final 특성 자동 부여

        field = 10;

//        arg1 = 20;
//        arg2 = 20;
//
//        var1 = 30;
//        var2 = 30;

        Calculatable calc = new Calculatable() {
            @Override
            public int sum() {
                int result = field + arg1 + arg2 + var1 + var2;

                return result;
            }
        };

        System.out.println(calc.sum());
    }
}
