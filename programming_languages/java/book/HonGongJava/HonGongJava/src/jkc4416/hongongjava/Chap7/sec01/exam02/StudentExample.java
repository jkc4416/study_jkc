package jkc4416.hongongjava.Chap7.sec01.exam02;

public class StudentExample {
    public static void main(String[] args) {
        Student student = new Student("James", "123456-1234567", 1);

        // 부모 클래스인 People 클래스로부터 상속 받은 필드 출력
        System.out.println("name: " + student.name);
        System.out.println("ssn: " + student.ssn);

        // 자식 클래스에서 새로 정의한 필드 출력
        System.out.println("studentNo: " + student.studentNo);
    }
}
