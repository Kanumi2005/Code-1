#include "solve.h"
#include "row-col_sum.h"
#include <climits>

int sum_main_diagonal(int arr[][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i][i];
    return sum;
}
int sum_anti_diagonal(int arr[][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[n - 1 - i][i];
    return sum;
}
int row_max_sum(int arr[][100], int n) {
    int max = INT_MIN;
    int row_max;
    for (int i = 0; i < n; ++i) {
        int sum = sum_row(arr, i, n);
        if (sum > max) {
            max = sum;
            row_max = i;
        }
    }
    return row_max;
}

bool is_magic_square(int arr[][100], int n) {
    int a[n * n + 1] {};
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (arr[i][j] <= 0 || arr[i][j] > n * n)
                return false;
            else
                ++a[ arr[i][j] ];
    
    for (int i = 1; i <= n * n; ++i)
        if (a[i] != 1)
            return false;
    int sum = sum_main_diagonal(arr, n);
    if ( sum_anti_diagonal(arr, n) != sum )
        return false;
    for (int i = 0; i < n; ++i) {
        if (sum_row(arr, i, n) != sum || sum_col(arr, i, n) != sum)
            return false;
    } 
    return true;
}