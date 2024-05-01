#include <iostream>  // 표준 입출력 스트림을 위한 라이브러리 포함
#include <string>    // string 클래스를 사용하기 위한 헤더 포함
using namespace std;

int main() {
    string text;  // 사용자로부터 입력받을 문자열을 저장할 string 객체 선언
    cout << "문자열 입력>> ";  // 사용자에게 문자열 입력을 요청하는 메시지 출력
    getline(cin, text);  // getline을 사용하여 공백을 포함한 문자열 전체를 입력 받음

    int count = 0;  // 'a' 문자의 개수를 세기 위한 카운터 변수 초기화
    int pos = text.find('a', 0);  // text 문자열에서 'a' 문자를 처음 찾기 시작하는 위치 0부터 검색, pos에는 찾은 문자의 위치 인덱스를 저장함

    // find() 함수가 문자열의 끝에 도달할 때까지 반복
    while (pos != string::npos) {  // find() 함수가 'a'를 찾지 못하면 npos를 반환
        count++;  // 'a'를 찾을 때마다 카운터 증가
        pos = text.find('a', pos + 1);  // 다음 'a'를 찾기 위해 마지막으로 찾은 위치 다음부터 검색을 계속
    }

    // 최종 결과 출력: 'a' 문자의 총 개수를 출력
    cout << "문자 a는 " << count << "개 있습니다." << endl;
    return 0;  // 프로그램 종료
}
