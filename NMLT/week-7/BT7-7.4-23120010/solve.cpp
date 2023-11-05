#include "solve.h"
#include "col_max.h"
#include "check_sum.h"

void find_elements(int arr[][100], int m, int n, int e[], int &size) {
    for (int col = 0; col < n; ++col) {
        int row = col_max(arr, m, col);
        if ( is_sum(arr, m, n, row, col) ) {
            e[size] = arr[row][col];
            ++size;
        }
    }
}