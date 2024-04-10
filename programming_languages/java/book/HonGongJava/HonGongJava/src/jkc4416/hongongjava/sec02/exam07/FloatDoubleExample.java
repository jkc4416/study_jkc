package jkc4416.hongongjava.sec02.exam07;

public class FloatDoubleExample {
    public static void main(String[] args){
//        float var1 = 3.14;
        float var2 = 3.14f;
        float var3 = (float) 3.14;
        double var4 = 3.14;

        float var5 = 0.1234567890123456789f;
        double var6 = 0.1234567890123456789;

        System.out.println("var2: " + var2);
        System.out.println("var4: " + var4);
        System.out.println("var5: " + var5);
        System.out.println("var6: " + var6);

        double var7 = 3e6;
        float var8 = 3e6F;
        double var9 = 2e-3;

        System.out.println("var7: " + var7);
        System.out.println("var8: " + var8);
        System.out.println("var9: " + var9);

    }
}
