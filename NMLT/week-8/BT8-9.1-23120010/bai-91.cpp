#include "fraction.h"
#include "io-91.h"

int main() {
    frac a, b;
    input(a);
    input(b);

    output(sum(a, b), product(a, b), reverse(a), reverse(b), shorten(a), shorten(b));
    return 0;
}
