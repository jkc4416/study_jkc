// Trace.cpp
#include "Trace.h"

// traces 벡터를 정의
vector<pair<string, string> > Trace::traces;

// 디버깅 정보를 추가하는 함수
// tag: 디버깅 정보를 구분하는 태그
// message: 디버깅 메시지
void Trace::put(const string& tag, const string& message) {
    if (traces.size() < 100) {  // 디버깅 정보는 100개로 제한
        traces.emplace_back(tag, message);  // 태그와 메시지를 벡터에 추가
        /*
        - emplace_back 멤버 함수는 C++11에서 도입된 STL 컨테이너의 멤버 함수로, 컨테이너의 끝에 새로운 요소를 추가하는 기능을 제공함
        - 이 함수는 특히 성능 최적화와 관련된 상황에서 유용하게 사용됨
        - emplace_back의 주요 특징과 동작 방식
            - 위치에서의 생성
                : emplace_back은 컨테이너의 끝에 새로운 요소를 추가할 때, 그 요소를 직접 생성함
                : 즉, 요소가 컨테이너 내부에서 직접 생성되므로 불필요한 복사나 이동 연산이 발생하지 않음
                : 이는 push_back과 비교했을 때 주요한 차이점
                : push_back은 먼저 요소를 생성한 다음 컨테이너에 복사 또는 이동시키기 때문에 경우에 따라 불필요한 복사/이동이 발생할 수 있음
            - 가변 인자 템플릿
                : emplace_back은 가변 인자 템플릿(variadic template)으로 구현되어 있음
                : 이를 통해 다양한 타입과 수의 인자를 받아들일 수 있으며, 이 인자들은 컨테이너 요소 타입의 생성자에 전달됨
        */
    }
}

// 디버깅 정보를 출력하는 함수
// tag: 특정 태그를 출력할 때 사용, 기본값은 ""로 모든 정보를 출력
void Trace::print(const string& tag) {
    if (tag.empty()) {  // tag가 비어 있으면 모든 디버깅 정보를 출력
        cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
        for (const auto& trace : traces) {  // traces 벡터를 순회하며 모든 정보를 출력
            cout << trace.first << ": " << trace.second << endl;
        }
    } else {  // 특정 태그의 디버깅 정보를 출력
        cout << "----- " << tag << "태그의 Trace 정보를 출력합니다. -----" << endl;
        for (const auto& trace : traces) {  // traces 벡터를 순회하며 해당 태그의 정보를 출력
            if (trace.first == tag) {
                cout << trace.first << ": " << trace.second << endl;
            }
        }
    }
}
