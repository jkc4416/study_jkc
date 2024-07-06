// BaseMemory.h
#ifndef BASEMEMORY_H
#define BASEMEMORY_H

// BaseMemory 클래스 정의: 기본 메모리 기능을 제공하는 클래스
class BaseMemory {
private:
    char *mem;  // 메모리를 가리키는 포인터
protected:
    // 생성자: 메모리 크기를 초기화하고 메모리를 할당합니다.
    BaseMemory(int size);

    // 소멸자: 동적으로 할당된 메모리를 해제합니다.
    ~BaseMemory();

    // 메모리의 특정 인덱스에 값을 저장합니다. 파생 클래스에서만 사용 가능합니다.
    void setMem(int index, char val);

    // 메모리의 특정 인덱스에 있는 값을 반환합니다. 파생 클래스에서만 사용 가능합니다.
    char getMem(int index) const;
};

#endif
