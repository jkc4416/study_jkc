#include <iostream>
#include <sstream> // std::stringstream을 사용하기 위한 헤더 포함
#include <string> // std::string을 사용하기 위한 헤더 포함
#include <vector> // std::vector를 사용하기 위한 헤더 포함

using namespace std;

int main() {
    string input; // 사용자로부터 입력받을 전체 문자열을 저장할 변수
    vector<string> names; // ';'로 구분된 이름들을 저장할 벡터
    string name; // 개별 이름을 임시 저장할 변수
    int maxLength = 0; // 가장 긴 이름의 길이를 저장할 변수
    string longestName; // 가장 긴 이름을 저장할 변수

    // 사용자에게 입력 안내 메시지 출력
    cout << "';'으로 구분하여 5개의 이름을 입력하세요: ";
    getline(cin, input); // std::cin을 사용하여 한 줄 전체를 입력받아 input 변수에 저장

    // 입력 문자열을 ';' 기준으로 분리하기 위해 stringstream 사용
    stringstream ss(input);
    // getline 함수를 사용하여 ';'가 나올 때까지 문자열을 읽고, name 변수에 저장
    while (getline(ss, name, ';')) {
        names.push_back(name); // 분리된 이름을 names 벡터에 추가
    }

    // 입력된 이름들을 출력
    cout << "입력된 이름:" << endl;
    for (int i = 0; i < names.size(); i++) {
        cout << i + 1 << ": " << names[i] << endl; // 이름과 함께 순서 번호 출력
        // 현재 이름의 길이가 지금까지 발견된 가장 긴 이름의 길이보다 크면 정보 업데이트
        if (names[i].length() > maxLength) {
            maxLength = names[i].length(); // 최대 길이 업데이트
            longestName = names[i]; // 가장 긴 이름 업데이트
        }
    }

    // 가장 긴 이름을 출력
    cout << "가장 긴 이름은 " << longestName << endl;

    return 0;
}
