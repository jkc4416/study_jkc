// MORSE_H는 이 헤더 파일의 Include guard 입니다. 
// Include guard는 이 헤더 파일이 여러 번 포함되는 것을 방지하여,
// 재정의 오류와 기타 관련 문제들을 예방하는 데 사용됩니다.
#ifndef MORSE_H
#define MORSE_H

// 표준 라이브러리 헤더 파일을 포함합니다.
// iostream은 표준 입출력 스트림을 사용하기 위해,
// string은 문자열 처리를 위해,
// unordered_map은 해시 기반의 맵 컨테이너를 사용하기 위해 포함됩니다. 해시 기반의 맵 컨테이너는 컴퓨터 과학에서 키-값 쌍을 저장하고 관리하는 데 사용되는 데이터 구조입니다.
#include <iostream>
#include <string>
#include <unordered_map>

// std 네임스페이스를 사용함으로써, std:: 접두사를 생략할 수 있습니다.
// 이것은 코드를 좀 더 깔끔하게 만들어줍니다.
using namespace std;

// Morse 클래스를 선언합니다. 
// 이 클래스는 문자와 모스 부호 간의 변환 기능을 제공합니다.
class Morse {
private:
    // charToMorse 맵은 문자를 키로 하고 모스 부호를 값으로 저장합니다.
    // 이 맵은 알파벳과 숫자, 특수 문자의 모스 부호 변환을 위해 사용됩니다.
    unordered_map<char, string> charToMorse;
    
    // morseToChar 맵은 모스 부호를 키로 하고 해당하는 문자를 값으로 저장합니다.
    // 이 맵은 모스 부호를 다시 텍스트로 변환하는 데 사용됩니다.
    unordered_map<string, char> morseToChar;

public:
    // Morse 클래스의 생성자입니다.
    // 이 생성자는 매핑을 초기화하는 역할을 합니다.
    Morse();  
    
    // text2Morse 함수는 주어진 텍스트 문자열을 모스 부호로 변환합니다.
    // 입력된 텍스트는 const 참조를 통해 받으며, 결과 모스 부호는 참조를 통해 반환됩니다.
    void text2Morse(const string& text, string& morse);  
    
    // morse2Text 함수는 주어진 모스 부호를 다시 텍스트로 변환합니다.
    // 입력된 모스 부호는 const 참조를 통해 받으며, 결과 텍스트는 참조를 통해 반환됩니다.
    // 이 함수는 성공적으로 변환되었는지를 나타내는 bool 값을 반환합니다.
    bool morse2Text(const string& morse, string& text);  
};

// Include guard의 종료 부분입니다.
// 이 부분은 헤더 파일의 내용이 여기서 끝났음을 나타냅니다.
#endif
