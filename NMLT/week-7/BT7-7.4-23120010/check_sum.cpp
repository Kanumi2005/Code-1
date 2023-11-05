#include "check_sum.h"

bool is_sum(int arr[][100], int m, int n, int row, int col) {
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[row][i];
    for (int i = 0; i < m; ++i)
        sum += arr[i][col];
    if (sum == 3 * arr[row][col])
        return true;
    return false;
}