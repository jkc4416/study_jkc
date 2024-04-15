// Ram.h
#ifndef RAM_H
#define RAM_H

// Ram 클래스 선언부
class Ram {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    static const int SIZE = 100 * 1024;  // 메모리 크기 상수
    /* 
    - static 
        : static 키워드는 클래스의 모든 인스턴스가 아닌 클래스 자체에 속하는 변수를 선언하는 데 사용됨 
        : 즉, 이 변수는 Ram 클래스의 모든 객체에 대해 공유되며, 각 객체가 별도의 복사본을 가지지 않음
        : static 변수는 프로그램의 실행 시작 시에 초기화되고, 프로그램이 종료될 때까지 메모리에 존재함
    - const
        : const 키워드는 변수의 값을 변경할 수 없음을 나타냄
        : 이는 변수가 상수임을 의미하며, 초기화 이후에는 그 값을 수정할 수 없음
        : 클래스 내에서 const로 선언된 멤버는 보통 클래스 생성자에서 초기화되고, 그 값은 변하지 않음   
    */
    char mem[SIZE];  // 메모리 배열 (SIZE 크기만큼의 char 타입 배열 선언)
public:
    Ram();  // 생성자
    ~Ram();  // 소멸자
    char read(int address);  // 주소의 메모리 바이트 리턴
    void write(int address, char value);  // 주소에 한 바이트로 값 저장
};

#endif
