package jkc4416.hongongjava.Chap13.sec01.exam07;

public class Student {

    // Define instance fields
    public int sno;
    public String name;

    public Student(int sno, String name) {
        this.sno = sno;
        this.name = name;
    }

    @Override
    public boolean equals(Object obj) {
        if(obj instanceof Student) {
            Student student = (Student) obj;
            return (sno==student.sno) && (name.equals(student.name));  // 학생 이름이랑 학번이 동일한 객체들의 경우 true 리턴!
        } else {
            return false;
        }
    }

    @Override
    // 학번과 이름이 같다면 동일한 값을 리턴
    public int hashCode() {
        return sno + name.hashCode();
    }
}
