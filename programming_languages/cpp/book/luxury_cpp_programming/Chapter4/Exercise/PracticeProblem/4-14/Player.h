#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

// Player 클래스 선언부

class Player {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    string name;  // 플레이어의 이름을 저장하는 string 타입의 멤버 변수
// public 접근 제어자를 가지는 생성자 및 멤버 함수 선언
public:
    Player() : name("") {};  // 기본 생성자 선언
    Player(const string& name);  // string 타입의 참조 변수 name을 매개변수로 받는 생성자
    /* 
    - string& name  
        : 이 구문은 name이라는 매개변수가 std::string 타입의 참조자(reference)임을 의미합니다. 
        : 참조자를 매개변수로 사용하는 이유는 몇 가지가 있습니다:
            1. 성능 최적화
                : 문자열 객체를 함수로 전달할 때, 참조자를 사용하면 해당 객체의 복사본을 만들지 않아도 됩니다. 
                : 객체의 복사본을 만드는 것은 메모리 사용과 처리 시간을 증가시킬 수 있기 때문에, 특히 큰 데이터 구조에서는 성능 저하를 일으킬 수 있습니다. 
                : 참조자를 사용하면 이러한 복사 과정 없이 원본 객체에 대한 직접적인 접근이 가능합니다.
            2. 원본 데이터 접근
                : 참조자를 통해 함수는 원본 데이터를 직접 조작할 수 있습니다. 
                : 이 경우, const 키워드가 추가되어 데이터의 수정이 불가능하도록 제한되어 있습니다.    
    - const std::string& name
        : 여기서 const는 name 매개변수가 수정되지 않음을 보장합니다. 즉, 이 매개변수를 통해 전달된 문자열 데이터는 함수 내에서 변경할 수 없습니다. const의 사용은 다음과 같은 이점을 제공합니다:
            1. 데이터 보호: 함수 내에서 실수로 데이터를 변경하는 것을 방지합니다. 이는 코드의 안전성을 향상시키고 버그를 줄일 수 있습니다.
            2. 인터페이스 설계: 함수가 매개변수로 받은 데이터를 변경하지 않을 것임을 명시적으로 선언함으로써, 함수 사용자에게 해당 함수의 동작을 명확하게 알려줍니다. 이는 함수의 예측 가능성과 신뢰성을 높여줍니다.
            3. 메소드 오버로딩: const와 non-const 버전의 메소드를 오버로딩하여, 객체의 상태에 따라 적절한 메소드가 호출될 수 있도록 할 수 있습니다.
    */    
    string getName() const;      // 이름을 반환하는 함수
    /*
    - string getName() const
        : 멤버 함수 뒤의 const의 경우, const는 멤버 함수가 클래스의 어떠한 멤버 변수도 수정하지 않는다는 것을 보증합니다. 
        : 이는 멤버 함수가 상수 메소드임을 나타내며, const 객체에 대해서도 호출될 수 있습니다. 
        : 상수 메소드는 객체의 상태를 변경하지 않기 때문에, 객체의 데이터를 읽기만 하고 변경하지 않는 메소드에 이 키워드를 사용하는 것이 일반적입니다.
    */
};

#endif
