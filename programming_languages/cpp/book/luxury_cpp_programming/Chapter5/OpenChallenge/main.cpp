#include "Morse.h"  // Morse 클래스의 정의를 포함하는 헤더 파일을 포함합니다. 이 클래스는 텍스트와 모스 부호 간의 변환 기능을 제공합니다.
#include <string>
using namespace std;

int main() {
    Morse morse;  // Morse 클래스의 인스턴스를 생성합니다. 이 인스턴스는 텍스트를 모스 부호로 변환하고, 그 반대의 변환도 수행하는 메소드를 가지고 있습니다.
    string inputText;  // 사용자로부터 입력받을 영문 텍스트를 저장할 문자열 변수를 선언합니다.
    string morseCode;  // 변환된 모스 부호를 저장할 문자열 변수를 선언합니다.
    string outputText;  // 모스 부호로부터 다시 변환된 텍스트를 저장할 문자열 변수를 선언합니다.

    // 사용자에게 영문 텍스트 입력을 요청하는 메시지를 출력합니다.
    cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다." << endl;
    getline(cin, inputText);  // 한 줄의 텍스트를 입력 받아 inputText 변수에 저장합니다. 이 함수는 엔터 키가 눌릴 때까지 입력을 계속 받습니다.

    // 입력 받은 텍스트를 모스 부호로 변환합니다. 변환된 결과는 morseCode 변수에 저장됩니다.
    morse.text2Morse(inputText, morseCode);
    cout << morseCode << endl;  // 변환된 모스 부호를 출력합니다.

    // 변환된 모스 부호를 다시 영문 텍스트로 변환하는 과정을 시작한다는 메시지를 출력합니다.
    cout << "모스 부호를 다시 영문 텍스트로 바꿉니다." << endl;
    // 모스 부호를 다시 영문 텍스트로 변환하고 그 결과를 outputText에 저장합니다.
    morse.morse2Text(morseCode, outputText);
    cout << outputText << endl;  // 변환된 영문 텍스트를 출력합니다.

    return 0;  // main 함수의 실행을 성공적으로 마치고, 프로그램을 종료합니다.
}
