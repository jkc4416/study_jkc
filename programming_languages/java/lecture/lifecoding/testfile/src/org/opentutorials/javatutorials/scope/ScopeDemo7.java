package org.opentutorials.javatutorials.scope;

class C {
    int v_ = 10;  // this.v_

    void m() {
        int v = 20;
        System.out.println(v);
        System.out.println(this.v_);
    }
}

public class ScopeDemo7 {
    public static void main(String[] args) {
        C c1 = new C();
        c1.m();
    }
}
