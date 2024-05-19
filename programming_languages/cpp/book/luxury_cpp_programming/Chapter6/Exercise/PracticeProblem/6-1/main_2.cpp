#include <iostream>
using namespace std;

// Sum elements of one or two arrays using a default parameter for the second array
int add(int arr1[], int size, int arr2[] = nullptr) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr1[i];
        if (arr2 != nullptr) {
            sum += arr2[i];
        }
    }
    return sum;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int c = add(a, 5);
    int d = add(a, 5, b);
    cout << c << endl;  // Output: 15
    cout << d << endl;  // Output: 55
}
