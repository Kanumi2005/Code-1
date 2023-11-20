#include "solve-83.h"
#include "io-83.h"

int main() {
    char str[100], freq[100][100] {"\0"};
    
    input(str);
    count_freq(str, freq);
    output(freq);

    return 0;
}