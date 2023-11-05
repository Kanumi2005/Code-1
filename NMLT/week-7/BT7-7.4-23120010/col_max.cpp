#include "col_max.h"
#include <climits>

int col_max(int arr[][100], int m, int col) {
    int max = INT_MIN;
    int col_max = 0;
    for (int i = 0; i < m; ++i)
        if (arr[i][col] > max) {
            max = arr[i][col];
            col_max = i;
        }
    return col_max;
}
