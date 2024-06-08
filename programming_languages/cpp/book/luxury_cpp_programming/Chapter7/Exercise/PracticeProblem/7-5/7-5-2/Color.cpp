#include "Color.h"

Color operator+(const Color& a, const Color& b) {
    int newRed = (a.red + b.red) % 256;
    int newGreen = (a.green + b.green) % 256;
    int newBlue = (a.blue + b.blue) % 256;
    return Color(newRed, newGreen, newBlue);
}

bool operator==(const Color& a, const Color& b) {
    return a.red == b.red && a.green == b.green && a.blue == b.blue;
}
