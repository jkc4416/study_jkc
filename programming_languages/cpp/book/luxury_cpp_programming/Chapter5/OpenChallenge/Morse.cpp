#include "Morse.h"
#include <string>
using namespace std;

// Morse 클래스의 생성자
Morse::Morse() {
    // 모스 부호로 변환될 각 알파벳, 숫자 및 특수 문자에 대한 모스 부호 배열 (배열 원소 개수 42개)
    string symbols[] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.",
        "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..",
        "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "----..", "----.",
        "-..-.", "..--..", "--..--", ".-.-.-", ".-.-.", "-...-"
    };

    // 모스 부호와 연결될 알파벳과 숫자, 특수 문자 배열 (전부 42개 문자)
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/?,.+=";

    // 문자 배열의 길이 계산, 널 종료 문자도 포함되어 있으므로 실제 사용 길이는 이보다 하나 적습니다. (자꾸 string 길이 관련 에러 뜨던 이유...! -> 43Length error: basic_string::_M_create)
    int len_characters = sizeof(characters) - 1; // 널 문자 제외 -> 43Length error: basic_string::_M_create 에러 해결!

    // 문자와 모스 부호를 매핑하는 루프
    try {
        for (int i = 0; i < len_characters; i++) {
            charToMorse[characters[i]] = symbols[i];  // characters[i]가 키(key), symbols[i]가 값(value)이 됨
            morseToChar[symbols[i]] = characters[i];  // symbols[i]가 키(key), characters[i]가 값(value)이 됨
        }
    } catch (const length_error& le) {
        // 매핑 과정에서 발생할 수 있는 예외를 처리
        cerr << "Length error: " << le.what() << '\n';
        /* 
        - cerr << "Length error: " << le.what() << '\n';
            -> C++ 프로그래밍에서 예외 처리를 하는 부분의 일환으로, 오류 메시지를 표준 에러 스트림(std::cerr)에 출력하는 라인 
        - le.what()
            -> le는 std::length_error 타입의 예외 객체입니다. what() 함수는 std::exception 클래스에서 파생된 모든 예외 클래스에서 사용할 수 있는 멤버 함수로, 예외에 대한 설명을 문자열로 반환합니다.
        */
    }
}

// 영문 텍스트를 모스 부호로 변환하는 함수
void Morse::text2Morse(const string& text, string& morse) {  // 입력된 텍스트를 const 참조를 통해 매개변수로 받으며, 텍스트를 변환한 결과인 모스 부호는 참조를 통해 반환됩니다.
    // const string& text: 함수는 'text'라는 이름의 const string 참조를 입력 매개변수로 받습니다.
    // 이는 입력 텍스트가 함수 내에서 변경되지 않음을 보장하며, 불필요한 데이터 복사를 피해 성능을 향상시킵니다.
    // string& morse: 변환된 모스 부호를 저장할 string 참조 'morse'도 매개변수로 받습니다.
    // 참조를 사용함으로써, 함수 내에서 'morse' 문자열에 직접 변경을 가할 수 있으며, 반환 타입을 사용하지 않고 결과를 반환할 수 있습니다.

    morse.clear(); // morse 문자열을 비워 초기화합니다. 이는 이전에 'morse' 변수에 저장되었던 값이 있을 경우를 대비한 것입니다.

    for (char c : text) {  // 범위 기반(range based) for loop를 사용해서 참조 매개변수로 입력된 string 객체인 text의 문자를 하나씩 순차적으로 처리
        c = toupper(c); // 입력된 문자를 대문자로 변환
        if (charToMorse.find(c) != charToMorse.end()) {
            // charToMorse 맵에서 현재 문자 'c'의 모스 부호를 찾습니다.
            // 문자 'c'의 모스 부호가 맵에 있으면, 해당 모스 부호를 'morse' 문자열에 추가합니다.
            // 각 문자 사이에는 모스 부호 표준에 따라 한 칸의 공백을 추가합니다.
            morse += charToMorse[c] + " ";  
            
        } else if (c == ' ') {
            // 만약 현재 문자가 공백(' ')이라면, 모스 부호에서 단어 사이의 구분을 위해 세 칸의 공백을 추가합니다.
            morse += "   ";
        }
    }
}

// 모스 부호를 영문 텍스트로 변환하는 함수
bool Morse::morse2Text(const string& morse, string& text) {  // 모스 부호 변환 결과를 const 참조를 통해 매개변수로 받으며(const string& morse), 재변환된 텍스트를 참조를 통해 반환됩니다.
    // 모스 부호 입력을 const 참조를 통해 받습니다. 이는 입력 값을 변경하지 않고, 복사 비용을 절약하기 위함입니다.
    // string& text 매개변수는 결과를 저장할 변수의 참조로, 직접 값을 변경하여 반환할 수 있습니다.

    text.clear(); // 결과 문자열을 초기화합니다. 이는 이전에 저장된 값이 있을 경우를 대비한 것입니다.

    string temp; // 임시 문자열로, 현재 읽고 있는 모스 부호 조각을 저장합니다.
    bool spaceFound = false; // 단어 간 공백 처리를 위한 플래그입니다. 공백이 연속으로 나오는 경우를 처리하기 위해 사용합니다.
    bool prev_char_space = false;

    for (char c : morse) {
        if (c != ' ') {
            temp += c; // 현재 문자가 공백이 아닌 경우, temp에 추가합니다. 이는 모스 부호의 한 부분을 구성합니다.
        } else {
            
            spaceFound = true;

            if (!temp.empty() && morseToChar.find(temp) != morseToChar.end()) {
                // temp에 저장된 모스 부호가 유효한 경우 해당 문자를 결과에 추가
                /*
                - !temp.empty()
                    : temp 문자열이 비어 있지 않다는 것을 확인합니다. (temp는 처리 중인 모스 부호 조각을 임시로 저장하는 변수입니다.)
                - morseToChar.find(temp) != morseToChar.end()
                    : temp에 저장된 모스 코드가 morseToChar 맵에 유효한 키로 존재하는지 확인합니다. morseToChar는 모스 코드를 키로 하고 해당 모스 코드에 대응하는 영문자를 값으로 하는 맵입니다.
                */
                    
                text += tolower(morseToChar[temp]); // 매핑된 영문자를 결과 문자열에 추가합니다. 문자는 소문자로 변환됩니다.
                temp.clear(); // temp를 비웁니다.
                spaceFound = false; // 공백 플래그를 설정합니다.
            }
            else { // 첫 번째 공백만 처리
                spaceFound = true;
                if (spaceFound) {
                    text += ' ';
                    spaceFound = false;
                }
            }
        }
    }
    // 마지막에 남은 모스 부호 처리
    if (!temp.empty() && morseToChar.find(temp) != morseToChar.end()) {
        text += morseToChar[temp];
    }
    return true; // 함수 실행 완료
}
