#include "gcd.h"
#include <cstdio>

int gcd(int a, int b) {
    for (; b != 0;) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d", a);
    return a;
}