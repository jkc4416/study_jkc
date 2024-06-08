#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
    Matrix a(4, 3, 2, 1), b;
    int x[4];
    int y[4] = {1, 2, 3, 4};

    a >> x;  // Matrix -> array
    b << y;  // array -> Matrix

    for (int i = 0; i < 4; i++) {
        cout << x[i] << ' ';
    }
    cout << endl;
    cout << "Check the elements of 'a'" << endl;
    a.show();
    cout << "Check the elements of 'b'" << endl;
    b.show();

    return 0;
}
