#include <iostream>
using namespace std;

// 함수 선언
static int* concat(int s1[], int s2[], int size);  // s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
static int* remove(int s1[], int s2[], int size, int& retSize);  // s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴. 리턴하는 배열의 크기는 retSize에 전달. retSize가 0인 경우 NULL 리턴

int main() {
    
    int size = 5;
    int x[size], y[size];

    cout << "정수를 5개 입력하라. 배열 x에 삽입한다 >> ";
    for (int i = 0; i < size; i++) {
        cin >> x[i];
    }

    cout << "정수를 5개 입력하라. 배열 y에 삽입한다 >> ";
    for (int i = 0; i < size; i++) {
        cin >> y[i];
    }

    // 배열 합치기
    int* concatenated = concat(x, y, size);
    cout << "합친 정수 배열을 출력한다" << endl;
    for (int i = 0; i < size * 2; i++) {
        cout << concatenated[i] << ' ';
    }
    cout << endl;
    delete[] concatenated;

    // 배열에서 요소 제거
    int retSize;
    int* removed = remove(x, y, size, retSize);
    cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
    if (removed != NULL) {
        for (int i = 0; i < retSize; i++) {
            cout << removed[i] << ' ';
        }
        cout << endl;
        delete[] removed;
    }

    return 0;
}

// 함수 구현
int* concat(int s1[], int s2[], int size) {  // s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
    int* result = new int[size * 2];  // 두 배열을 합친 크기만큼의 새로운 배열 동적 생성
    for (int i = 0; i < size; i++) {
        result[i] = s1[i];  // 첫 번째 배열 복사
        result[i + size] = s2[i];  // 두 번째 배열 복사
    }
    return result;
}

int* remove(int s1[], int s2[], int size, int& retSize) {  // s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴. 리턴하는 배열의 크기는 retSize에 전달. retSize가 0인 경우 NULL 리턴
    bool* toRemove = new bool[size];  // s1의 요소 중 삭제할 요소를 표시할 배열
    for (int i = 0; i < size; i++) {
        toRemove[i] = false;  // 초기화: 모든 요소를 false로 설정
        for (int j = 0; j < size; j++) {
            if (s1[i] == s2[j]) {  // s1의 요소가 s2에 있으면
                toRemove[i] = true;  // 해당 요소를 true로 설정
                break;
            }
        }
    }

    retSize = 0;
    for (int i = 0; i < size; i++) {
        if (!toRemove[i]) {
            retSize++;  // 제거되지 않는 요소의 개수 계산
        }
    }

    if (retSize == 0) {
        delete[] toRemove;
        return NULL;  // 모든 요소가 제거되는 경우
    }

    int* result = new int[retSize];
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (!toRemove[i]) {
            result[index++] = s1[i];  // 제거되지 않는 요소를 새 배열에 복사
        }
    }

    delete[] toRemove;
    return result;
}

