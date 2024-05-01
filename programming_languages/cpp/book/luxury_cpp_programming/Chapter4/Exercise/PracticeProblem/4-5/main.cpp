#include <iostream> // 표준 입출력 스트림을 위한 라이브러리 포함
#include <string>   // string 클래스를 사용하기 위한 헤더 포함
#include <cstdlib>  // rand(), srand() 함수를 사용하기 위한 라이브러리 포함
#include <ctime>    // time() 함수를 사용하기 위한 라이브러리 포함
using namespace std;

int main() {
    
    srand((unsigned)time(0));  // 랜덤 시드를 설정하여 매번 실행할 때마다 다른 결과를 얻도록 함
    
    string input;  // 사용자 입력을 저장할 문자열 변수 선언
    cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)\n";
    
    while (true) { // 무한 루프 시작
        cout << ">> ";
        getline(cin, input); // 사용자로부터 한 줄 전체를 입력받음

        if (input == "exit") { // 입력받은 문자열이 "exit"인 경우
            break; // 루프를 빠져나와 프로그램 종료
        }

        if (input.empty()) { // 입력받은 문자열이 비어있는 경우
            continue; // 루프의 다음 반복으로 진행
        }

        // 랜덤으로 문자를 변경할 위치를 결정 (0부터 문자열 길이 - 1)
        int random_index = rand() % input.length();
        
        // 랜덤으로 선택할 새 문자 생성 (a-z 사이)
        char random_char = 'a' + (rand() % 26);
        
        // 이미 선택된 위치의 문자가 랜덤으로 생성된 문자와 같은 경우, 새로운 문자를 생성
        while (input[random_index] == random_char) {
            random_char = 'a' + (rand() % 26);
        }
        
        // 문자열에서 선택된 위치의 문자를 새로운 랜덤 문자로 변경
        input[random_index] = random_char;
        
        // 변경된 문자열 출력
        cout << input << endl;
    }
    
    return 0; // 메인 함수 종료
}
