#include <iostream>
using namespace std;

bool average(int a[], int size, double& avg) {  // 리턴 타입을 bool로 하고 평균값을 전달하기 위해 참조 매개 변수를 추가함
    if(size <= 0) {
        return false;
    }
    int sum = 0;
    for(int i=0; i<size; i++) {
        sum += a[i];
    }
    avg = sum/(double)size;  // 참조 매개 변수 avg에 계산된 평균값 전달
    return true;
}

int main() {
    int x[] = {0, 1, 2, 3, 4, 5};
    double avg;
    if(average(x, 6, avg)) {  // 참조 매개 변수 위치에 위에서 선언한 avg 사용 -> average 함수에서 계산된 값(sum/size)이 이 avg 변수에 저장됨
        cout << "평균은 " << avg << endl;
    }
    else {
        cout << "매개 변수 오류" << endl;
    }

    if(average(x, -2, avg)) {
        cout << "평균은 " << avg << endl;
    }
    else {
        cout << "매개 변수 오류" << endl;
    }    
}