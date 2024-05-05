#include <iostream>
using namespace std;

int main() {
    cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
    int i = 1;
    int n = 2;
    int &refn = n;  // 참조 변수 refn 선언, refn은 n에 대한 별명 (refn은 n과 같다고 보면 됨 = 같은 주소를 공유)

    n = 4;  // n=4, refn=4
    refn++;  // n=5, refn=5
    cout << i << '\t' << n << '\t' << refn << endl;

    refn = i;  // n=1, refn=1
    refn++;  // n=2, refn=2
    cout << i << '\t' << n << '\t' << refn << endl;

    int *p = &refn;  // refn의 주소, 즉 n의 주소를 int 타입 객체를 가리키는 포인터 p에 저장
    *p = 20;  // 간접참조연산자를 사용해서 포인터 p가 가리키는 주소에 저장된 값을 20으로 변경 -> n=20, refn=20
    cout << i << '\t' << n << '\t' << refn << endl;
}