#ifndef CONTAINER_H
#define CONTAINER_H

// Container 클래스 선언부

class Container {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    int size;           // Current amount of content in the container (컨테이너 내에 저장된 원료의 양을 저장하기 위한 멤버 변수)
    static const int max_size = 10; // Maximum capacity of the container
// public 접근 제어자를 가지는 기본 생성자 및 멤버 함수 선언
public:
    Container();         // Constructor declaration (기본 생성자 선언)
    void fill();         // Method to fill the container to maximum capacity (Container의 size 멤버 변수의 값을 최대값인 10으로 변경하는 멤버 함수)
    void consume(int amount = 1);  // Method to consume a specified amount of content
    int getSize() const; // Getter method to retrieve the current size (컨테이너 내에 현재 남아있는 원료의 양을 확인하기 위한 멤버 함수)
};

#endif // CONTAINER_H
