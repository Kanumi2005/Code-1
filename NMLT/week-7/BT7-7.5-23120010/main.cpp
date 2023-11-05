#include "io.h"
#include "solve.h"
#include <iostream>

int main() {
    int arr[100][100], size_row, size_col, m, n, rotate[100][100];
    input(arr, m, n);
    rotate_left(arr, m, n, rotate, size_row, size_col);
    std::cout << "Ma tran xoay trai 90 do la: \n";
    output(rotate, size_row, size_col);

    rotate_right(arr, m, n, rotate, size_row, size_col);
    std::cout << "Ma tran xoay phai 90 do la: \n";
    output(rotate, size_row, size_col);

    return 0;
}