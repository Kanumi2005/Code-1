#include "row-col_sum.h"

int sum_row(int arr[][100],int row, int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[row][i];
    return sum;
}
int sum_col(int arr[][100], int col, int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i][col];
    return sum;
}