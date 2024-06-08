#include "Color.h"

Color Color::operator+(const Color& other) {
    int newRed = (red + other.red) % 256;
    int newGreen = (green + other.green) % 256;
    int newBlue = (blue + other.blue) % 256;
    return Color(newRed, newGreen, newBlue);
}

bool Color::operator==(const Color& other) {
    return red == other.red && green == other.green && blue == other.blue;
}
