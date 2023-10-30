#include "solve-3.h"

bool is_triangle(double a, double b, double c) {
    if (a + b <= c || b + c <=a || c + a <= b)
        return false;
    return true;
}
bool is_right(double a, double b, double c) {
    if (a * a == b * b + c * c
        || b * b == c * c + a * a
        || c * c == a * a + b * b)
        return true;
    return false;
}
bool is_isosceles(double a, double b, double c) {
    if (a == b || b == c || c == a)
        return true;
    return false;
}
bool is_equilateral(double a, double b, double c) {
    if (a == b && b == c)
        return true;
    return false;
}