#include "solve.h"


void rotate_left(int arr[][100], int m, int n, int arr_left[][100], int &size_row, int &size_col) {
    size_row = n;
    size_col = m;
    for (int row = 0; row < size_row; ++row)
        for (int col = 0; col <size_col; ++col)
            arr_left[row][col] = arr[col][size_row - 1 - row];
}
void rotate_right(int arr[][100], int m, int n, int arr_right[][100], int &size_row, int &size_col) {
    size_row = n;
    size_col = m;
    for (int row = 0; row < size_row; ++row)
        for (int col = 0; col < size_col; ++col)
            arr_right[row][col] = arr[size_col - 1 - col][row];
}