package org.opentutorials.javatutorials.generic;

interface Info{
    int getLevel();
}

class StudentInfo{
    public int grade;
    public StudentInfo(int grade){
        this.grade = grade;
    }
}

class EmployeeInfo implements Info {
    public int rank;
    public EmployeeInfo(int rank){
        this.rank = rank;
    }
    public int getLevel(){
        return this.rank;
    }
}

class Person<T extends Info, S>{  // 복수의 제네릭이 필요할 때는 comma로 각각 작성해 줌
        public T info;
        public S id;
        Person(T info, S id){
            this.info = info;
            this.id = id;
            System.out.println(info.getLevel());
    }
}

public class GenericDemo {
    public static void main(String [] args){
        Person<EmployeeInfo, Integer> p1 = new Person<EmployeeInfo, Integer>(new EmployeeInfo(4), 2);
        System.out.println(p1.info.rank);
        System.out.println(p1.id);
    }
}
