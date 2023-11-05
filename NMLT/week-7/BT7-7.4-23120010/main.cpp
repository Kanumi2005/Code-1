#include "io.h"
#include "solve.h"

int main() {
    int arr[100][100], e[100], m, n, size = 0;
    input(arr, m, n);
    find_elements(arr, m, n, e, size);
    output(e, size);
    return 0;
}