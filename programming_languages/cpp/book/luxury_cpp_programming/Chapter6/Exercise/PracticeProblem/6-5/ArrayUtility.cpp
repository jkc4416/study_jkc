#include "ArrayUtility.h"

// int 배열을 double 배열로 변환하는 함수
void ArrayUtility::intToDouble(int source[], double dest[], int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = static_cast<double>(source[i]);  // int 값을 double로 변환하여 저장
        /*
        - source[i]
            : int 배열의 i번째 요소를 가져옵니다.
        - static_cast<double>(source[i])
            : int 값을 double 값으로 형 변환합니다.
            : static_cast는 C++에서 제공하는 형 변환 연산자 중 하나로, 주로 컴파일 시에 타입을 변환할 때 사용됨
            : static_cast는 주로 기본 타입 간의 변환, 상속 관계가 있는 클래스 간의 포인터 변환, 열거형과 정수형 간의 변환, void* 포인터 변환에 사용되며, 컴파일 타임에 타입 검사를 통해 안전한 변환을 보장함
            : 이 연산자는 명시적인 타입 변환을 수행하며, 컴파일러가 가능한 변환인지 검사하기 때문에 안전한 형 변환을 보장
            : static_cast는 컴파일 타임에 타입 체크를 수행하여 변환이 안전한지 확인
            : static_cast를 사용하면 코드의 가독성이 높아지며, 변환이 의도적이라는 것을 명확히 할 수 있음
            : static_cast는 컴파일 타임에만 타입을 검사하므로, 잘못된 타입 변환이 런타임 오류를 발생시킬 수 있음
            : 
        - dest[i] = ...
            : 변환된 double 값을 dest 배열의 i번째 요소에 저장합니다.
        */
    }
}

// double 배열을 int 배열로 변환하는 함수
void ArrayUtility::doubleToInt(double source[], int dest[], int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = static_cast<int>(source[i]);  // double 값을 int로 변환하여 저장
    }
}
