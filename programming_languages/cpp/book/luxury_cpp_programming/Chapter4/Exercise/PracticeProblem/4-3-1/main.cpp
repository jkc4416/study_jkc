#include <iostream>  // 표준 입출력 스트림 라이브러리 포함
#include <string>  // string 클래스를 사용하기 위해 포함
using namespace std;

int main() {
    string input;  // 사용자로부터 입력받을 문자열을 저장할 string 객체 선언
    cout << "문자열 입력>> ";
    getline(cin, input);  // getline 함수를 사용하여 한 줄 전체를 입력 받음 (공백 포함)

    int count = 0;  // 'a'의 개수를 세기 위한 카운터 변수
    for (size_t i = 0; i < input.length(); i++) {  // input.length()로 문자열의 길이를 얻음
        if (input[i] == 'a') {  // input[i] 또는 input.at(i)로 i번째 문자에 접근하여 'a'인지 확인
            count++;  // 'a'인 경우 카운터를 증가
        }
    }

    cout << "문자 a는 " << count << "개 있습니다." << endl;  // 최종 결과 출력: 'a' 문자의 총 개수를 출력
    return 0;  // 프로그램 종료
}
