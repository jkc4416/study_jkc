package org.opentutorials.javatutorials.progenitor;

class Student implements Cloneable{

    String name;
    Student (String name) {
        this.name = name;
    }

    public  boolean equals(Object obj) {
        Student s = (Student)obj;
        return this.name == s.name;
    }

    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}

public class ObjectDemo {
    public static void main(String [] args) {
        Student s1 = new Student("Kevin");
        Student s2 = new Student("Kevin");
        System.out.println(s1 == s2);
        System.out.println(s1.equals(s2));

        try {
            Student s3 = (Student) s1.clone();
            System.out.println(s1.name);
            System.out.println(s3.name);
        } catch(CloneNotSupportedException e) {
            System.out.println(e.getMessage());
        }
    }
}
