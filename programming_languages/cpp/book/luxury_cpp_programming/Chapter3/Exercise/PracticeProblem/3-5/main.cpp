#include <iostream>
#include "Random.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    Random r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;  // RAND_MAX: 헤더 <cstdlib>에 정의된 상수, 보통 32767
    for(int i=0; i<10; i++) {
        int n = r.next();
        cout << n << ' ';
    }

    cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
    for(int i=0; i<10; i++) {
        int n = r.nextInRange(2, 4);
        cout << n << ' ';
    }
    cout << endl;
}