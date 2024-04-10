#include <iostream> // 표준 입출력에 대한 기능을 사용하기 위한 헤더 파일
#include <string>   // std::string 클래스를 사용하기 위한 헤더 파일

using namespace std; // std 네임스페이스의 모든 요소를 직접 사용하기 위해 선언

int main() {
    string input; // 사용자로부터 입력받을 문자열을 저장할 변수 선언

    // 사용자에게 문자열 입력을 요청하는 메시지 출력
    cout << "문자열 입력 >>";
    // cin을 사용하여 사용자로부터 문자열 입력 받음. 공백을 포함한 문자열을 받기 위해 getline 함수 사용
    getline(cin, input);

    // 입력받은 문자열의 부분 문자열을 순차적으로 출력하기 위한 외부 반복문
    // i는 부분 문자열의 길이를 결정 (1부터 시작하여 입력받은 문자열의 길이까지 1씩 증가)
    // size_t는 C와 C++ 프로그래밍 언어에서 사용되는 데이터 타입으로, 어떤 객체의 크기를 저장하는 데 사용
    // 이 타입은 부호 없는 정수 타입(unsigned integer type)이며, 메모리 내에서 객체가 차지할 수 있는 최대 크기를 표현할 수 있도록 설계됨
    // size_t를 사용하는 이유는 프로그램의 이식성(portability)을 높이기 위함 (예를 들어, 어떤 시스템에서는 배열의 최대 크기가 매우 클 수 있으므로, size_t는 해당 시스템에서 사용 가능한 가장 큰 크기의 데이터를 저장할 수 있도록 보장함)
    // size_t의 사용은 특히 배열과 관련된 연산에서 중요하며, 부호 있는 정수 타입을 사용하여 메모리 크기나 객체의 크기를 다루는 것보다 오류를 줄이고 코드의 호환성을 높일 수 있음
    for (size_t i = 0; i < input.length(); i++) {
        // 현재 i값에 해당하는 부분 문자열을 구성하기 위한 내부 반복문
        // j는 부분 문자열의 각 문자를 출력 (0부터 시작하여 i까지 반복)
        for (size_t j = 0; j <= i; j++) {
            cout << input[j]; // 부분 문자열의 현재 문자 출력
        }
        cout << endl; // 부분 문자열 출력 후 줄 바꿈을 통해 다음 부분 문자열을 새로운 줄에 출력
    }

    return 0; // 프로그램 정상 종료
}