#include "solve.h"
#include "io.h"

int main() {
    int arr[100][100], n;
    input(arr, n);
    output( sum_main_diagonal(arr, n), sum_anti_diagonal(arr, n), row_max_sum(arr, n), is_magic_square(arr, n) );
    return 0;
}