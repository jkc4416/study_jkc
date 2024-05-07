#include <iostream>  // 표준 입출력 라이브러리 포함
using namespace std;  // std 네임스페이스의 모든 요소를 직접 호출 가능하게 함

// combine 함수의 프로토타입 선언
// 두 개의 문자열을 입력 받아 합쳐서 세 번째 문자열 매개변수에 저장하는 함수
void combine(const string& text1, const string& text2, string& result);

// main 함수: 프로그램의 진입점
int main() {
    string text1("I love you");  // 첫 번째 문자열 초기화
    string text2("very much");  // 두 번째 문자열 초기화
    string text3;  // 결과를 저장할 비어 있는 문자열 초기화

    combine(text1, text2, text3);  // combine 함수를 호출하여 text1과 text2를 결합한 결과를 text3에 저장
    cout << text3 << endl;  // text3의 내용을 콘솔에 출력 ("I love you very much")

    return 0;  // 프로그램 정상 종료
}

// combine 함수 정의
// 입력: text1, text2 (const string&로 참조 전달하여 메모리 효율성 증가 및 수정 불가)
// 출력: result (string&로 참조 전달하여 함수 외부에서 변경된 결과 유지)
void combine(const string& text1, const string& text2, string& result) {  // const string&는 문자열이 함수에 의해 변경되지 않도록 보장합니다.
    result = text1 + " " + text2;  // text1과 text2 사이에 공백을 넣어 문자열을 결합하고, 이를 result에 저장
    // result는 참조로 전달되므로, combine 함수 외부의 result 변수에 직접 값을 할당함
}
