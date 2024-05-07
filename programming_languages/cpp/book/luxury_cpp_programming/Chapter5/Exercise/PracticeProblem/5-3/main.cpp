#include <iostream>
using namespace std;

// combine 함수 선언
void combine(const string& text1, const string& text2, string& result);

// main 함수 선언
int main() {
    string text1("I love you");
    string text2("very much");
    string text3;  // 비어 있는 문자열

    combine(text1, text2, text3);  // text1과 text2를 덧붙여 text3 만들기
    cout << text3;  // "I love you very much" 출력
    return 0;
}

// combine 함수 정의
void combine(const string& text1, const string& text2, string& result) {
    result = text1 + " " + text2;  // text1, 공백, text2를 결합하여 result에 저장
}
