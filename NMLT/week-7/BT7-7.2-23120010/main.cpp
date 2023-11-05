#include "io.h"
#include "solve.h"

int main() {
    int arr[100], n;
    input(arr, n);
    output( is_increasing(arr, n), is_symmetrical(arr, n), is_arithmetic(arr, n) );
    return 0;
}