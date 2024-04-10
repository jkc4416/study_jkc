package org.opentutorials.javatutorials.accessmodifier.outer;
import org.opentutorials.javatutorials.accessmodifier.inner.*;

public class ClassAccessModifierOuterPackage {
    /*
    다른 패키지 내 Public class는 접근 가능하나, 다른 패키지 내 Default class는 접근 불가능함.
    또한, public 클래스는 소스코드의 이름과 일치해야함. 즉, 하나의 소스코드에는 하나의 public 클래스만 존재할 수 있음.
     */
    PublicClass publicClass = new PublicClass();
//    DefaultClass defaultClass = new DefaultClass();
}
