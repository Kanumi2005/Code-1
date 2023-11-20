#include "solve-85.h"
#include "io-85.h"

int main() {
    int size = 0;
    char str[100] {}, word[100][100] {}, c;
    input(str, c);
    split(str, c, word, size);
    output(word, size);

    return 0;
}