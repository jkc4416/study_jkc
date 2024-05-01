#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << endl;
    getline(cin, s, '\n');  // 문자열 입력

    int sum = 0;  // 합계 저장을 위한 변수 선언 
    int startIndex = 0;  // 시작 인덱스 저장을 위한 변수 선언

    while(true) {

        int fIndex = s.find('+', startIndex);  // + 기호 탐색

        if(fIndex == -1) {  // '+' 문자 발견할 수 없는 경우
            string part = s.substr(startIndex);
            if(part == "") {  // "2+3+", 즉 +로 끝나는 경우
                break;
            }
            cout << part << endl;
            sum += stoi(part);  // 문자열을 수로 변환하여 더하기
            break;
        }

        int count = fIndex - startIndex;  // 서브스트링으로 자를 문자 개수 (startIndex부터 fIndex까지, fIndex는 각 + 기호의 위치를 나타내며, loop가 실행되는 과정에서 바뀜)
        string part = s.substr(startIndex, count);  // startIndex부터 count 개의 문자로 서브스트링 만들기 (+ 기호를 제외하고 숫자만 가지고 서브스트링 생성)
        cout << part << endl;
        sum += stoi(part);  // 문자열을 수로 변환하여 더하기
        startIndex = fIndex+1; // 검색을 시작할 인덱스 전진시킴 (현재 loop에서 찾은 + 기호의 위치인 fIndex에 1을 더해서 fIndex 뒤에 위치한 + 기호를 다음 루프에서 찾을 수 있도록 설정함)
    }
    cout << "숫자들의 합은 " << sum << endl;
}