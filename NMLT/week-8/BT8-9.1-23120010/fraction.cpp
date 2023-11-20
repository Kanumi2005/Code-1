#include "fraction.h"
#include "gcd.h"
#include <cstdio>

frac sum(frac lhs, frac rhs) {
    frac temp = {
        lhs.numerator * rhs.denominator + lhs.denominator * rhs.numerator,
        lhs.denominator * rhs.denominator
        };
    return temp;
}

frac product(frac lhs, frac rhs) {
    frac temp = {
        lhs.numerator * rhs.numerator,
        lhs.denominator * rhs.denominator
    };
    return temp;
}

frac reverse(frac obj) {
    frac temp {obj.denominator, obj.numerator};
    return temp;
}

frac shorten(frac obj) {
    int ucln = gcd(obj.numerator, obj.denominator);
    frac temp = {
        obj.numerator / ucln,
        obj.denominator / ucln
    };
    return temp;
}

void display(frac obj) {
    std::printf("%d/%d", obj.numerator, obj.denominator);
}