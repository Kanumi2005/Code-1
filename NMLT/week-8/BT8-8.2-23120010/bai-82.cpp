#include "solve-82.h"
#include "io-82.h"
#include <cstring>

int main() {
    char s[100], t[100], kq[100];
    int arr[100], size = 0;

    input(s, t);
    find(s, t, arr, size);
    erase(s, kq, arr, size, std::strlen(t));
    output(kq);

    return 0;
}