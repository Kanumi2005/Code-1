#include "solve.h"
#include "io.h"

int main() {
    int arr[100], n;
    input(arr, n);
    output( count_negative(arr, n), count_prime(arr, n) );
    return 0;
}