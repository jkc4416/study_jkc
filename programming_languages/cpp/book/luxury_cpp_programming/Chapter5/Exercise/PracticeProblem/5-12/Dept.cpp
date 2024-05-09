#include "Dept.h"

// Dept 클래스의 구현부

// 생성자: size를 인자로 받아 scores 배열을 동적 할당합니다.
Dept::Dept(int size) {
    this->size = size;
    scores = new int[size];  // 동적 메모리 할당
}

// 깊은 복사 생성자: 원본 객체의 모든 데이터를 새로운 메모리에 복사합니다.
Dept::Dept(const Dept& dept) {
    size = dept.size;
    scores = new int[size];
    for (int i = 0; i < size; i++) {
        scores[i] = dept.scores[i];
    }
}

// 소멸자: 동적 할당된 메모리를 해제합니다.
Dept::~Dept() {
    delete[] scores;
}

// getSize: 배열의 크기를 반환합니다.
int Dept::getSize() {
    return size;
}

// read: 키보드로부터 학생들의 성적을 입력받습니다.
void Dept::read() {
    cout << "학생들의 점수를 입력하세요:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> scores[i];
    }
}

// isOver60: 주어진 인덱스의 학생 점수가 60점 이상인지 확인합니다.
bool Dept::isOver60(int index) {
    return scores[index] > 60;
}
