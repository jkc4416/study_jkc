#include "Statistics.h"
using namespace std;

int main() {
    Statistics stat;
    if (!stat) {
        cout << "현재 통계데이터가 없습니다." << endl;
    }

    int x[5];
    cout << "5 개의 정수를 입력하세요>>";
    for (int i = 0; i < 5; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < 5; i++) {
        stat << x[i];  // 데이터를 통계 객체에 삽입
    }
    stat << 100 << 200;  // 추가 데이터 삽입
    ~stat;  // 통계 데이터 출력

    int avg;
    stat >> avg;  // 평균 계산
    cout << "avg=" << avg << endl;  // 평균 출력

    return 0;
}
