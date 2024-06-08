#ifndef COLOR_H
#define COLOR_H

#include <iostream>
using namespace std;

class Color {
private:
    int red, green, blue;

public:
    Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}

    void show() const {
        cout << red << " " << green << " " << blue << endl;
    }

    Color operator+(const Color& other);
    bool operator==(const Color& other);
};

#endif
