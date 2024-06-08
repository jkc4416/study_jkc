#include "SortedArray.h"  // SortedArray 클래스 선언을 포함
#include <iostream>       // 표준 입출력 객체 및 함수 사용
#include <algorithm>      // 알고리즘 헤더, sort 함수 등을 사용하기 위함

using namespace std;      // std 네임스페이스를 기본으로 사용

// 기본 생성자
SortedArray::SortedArray() : size(0), p(nullptr) {}  // size를 0으로, p를 nullptr로 초기화하여 빈 배열을 나타냅니다.

// 복사 생성자
SortedArray::SortedArray(const SortedArray& src) : size(src.size), p(new int[src.size]) {
    copy(src.p, src.p + src.size, p);  // src의 배열 내용을 복사합니다.
    /*
    - copy 함수
        : C++ 표준 라이브러리에서 제공하는 알고리즘으로, 한 범위의 요소를 다른 범위로 복사하는 데 사용됨
        : copy 함수는 <algorithm> 헤더 파일에 정의되어 있음
        : 위 코드에서 src.p는 복사할 배열의 시작 주소를, src.p + src.size는 배열의 끝 다음 주소를 나타냄
        : 따라서 src.p부터 src.p + src.size 범위의 모든 요소들이 p가 시작하는 위치부터 순차적으로 복사됨
        : src.p ~ src.p+src.size 범위의 메모리에 저장된 값들을 p가 가리키는 메모리에 순차적으로 복사함
    */
    sort();  // 복사된 배열을 오름차순으로 정렬합니다.
}

// 정수 배열과 크기를 전달받는 생성자
SortedArray::SortedArray(int* array, int size) : size(size), p(new int[size]) {
    copy(array, array + size, p);  // 주어진 배열을 p로 복사합니다.
    sort();  // 복사된 배열을 오름차순으로 정렬합니다.
}

// 소멸자
SortedArray::~SortedArray() {
    delete[] p;  // 동적 할당된 배열 메모리를 해제합니다.
}

// 배열을 오름차순으로 정렬
void SortedArray::sort() {
    std::sort(p, p + size);
    /*
    - std::sort 함수는 C++ 표준 라이브러리에서 제공하는 알고리즘으로, 특정 범위의 요소들을 정렬하는 데 사용
    - std::sort 함수는 <algorithm> 헤더 파일에 정의되어 있으며, 다양한 정렬 알고리즘을 사용하여 효율적으로 정렬을 수행함
    - 위 코드에서 p는 배열의 시작 주소를, p + size는 배열의 끝 다음 주소를 나타냄
    - 따라서 p부터 p + size 범위의 모든 요소들이 오름차순으로 정렬됨
    - 이 코드에서 p는 정수 배열에 대한 포인터이므로 배열의 첫 번째 요소의 주소를 의미함
    */
}

SortedArray SortedArray::operator+(const SortedArray& op2) {
    // 두 SortedArray 객체를 더한 결과를 저장할 새로운 배열을 동적 할당합니다.
    int* newArray = new int[this->size + op2.size];  

    // this->p 배열과 op2.p 배열을 병합하여 newArray에 저장합니다.
    merge(this->p, this->p + this->size, op2.p, op2.p + op2.size, newArray);
    /*
    - merge 함수는 두 개의 정렬된 범위를 병합하여 하나의 정렬된 범위로 만듦
    - 이 함수는 std::merge로, C++ 표준 라이브러리 <algorithm> 헤더에 포함되어 있음
        - this->p: 첫 번째 범위의 시작 반복자. 여기서는 현재 객체의 배열의 시작을 가리킴
        - this->p + this->size: 첫 번째 범위의 끝 반복자. 현재 객체 배열의 끝을 가리킴
        - op2.p: 두 번째 범위의 시작 반복자. 전달받은 객체의 배열의 시작을 가리킴
        - op2.p + op2.size: 두 번째 범위의 끝 반복자. 전달받은 객체 배열의 끝을 가리킴
        - newArray: 병합된 결과를 저장할 범위의 시작 반복자. 병합 결과가 저장될 배열의 시작
    */

    // 병합된 결과를 사용하여 새로운 SortedArray 객체를 생성합니다.
    SortedArray temp(newArray, this->size + op2.size);  // 정수 배열과 크기를 전달받는 생성자를 이용 & 해당 생성자에 sort() 메서드가 사용되므로 정렬까지 수행됨

    // 동적 할당된 newArray를 해제합니다. (더 이상 필요없기 때문!)
    delete[] newArray;

    // 새로운 SortedArray 객체를 반환합니다.
    return temp;
}

SortedArray& SortedArray::operator=(const SortedArray& op2) {
    // 자기 자신과의 할당인지 확인하여, 자기 자신에게 할당하는 경우를 방지합니다.
    if (this != &op2) {
        // 기존에 할당된 메모리를 해제합니다.
        delete[] p;

        // 새로운 크기와 배열을 할당합니다.
        size = op2.size;
        p = new int[size];

        // op2의 배열을 현재 객체의 배열에 복사합니다.
        copy(op2.p, op2.p + size, p);
    }
    // 자기 자신의 참조를 반환합니다.
    return *this;
}

// 배열의 원소 출력
void SortedArray::show() {
    cout << "배열 출력 : ";
    for (int i = 0; i < size; i++) {
        cout << p[i] << ' ';  
        // 포인터 변수가 가리키는 메모리 = 배열의 첫 번째 요소가 위치한 메모리 
        // 포인터 이름 = 배열 이름
    }
    cout << endl;
}
