// BaseArray.h
#ifndef BASEARRAY_H
#define BASEARRAY_H

// BaseArray 클래스 정의: 기본 배열 기능을 제공하는 클래스
class BaseArray {
private:
    int capacity;  // 배열의 크기
    int *mem;  // 정수 배열을 만들기 위한 메모리의 포인터
protected:
    // 생성자: 배열의 크기를 초기화하고 메모리를 할당합니다. 기본값은 100입니다.
    BaseArray(int capacity = 100);

    // 소멸자: 동적으로 할당된 메모리를 해제합니다.
    ~BaseArray();

    // 배열의 특정 인덱스에 값을 저장합니다.
    void put(int index, int val);

    // 배열의 특정 인덱스에 있는 값을 반환합니다.
    int get(int index) const;

    // 배열의 크기를 반환합니다.
    int getCapacity() const;
};

#endif
