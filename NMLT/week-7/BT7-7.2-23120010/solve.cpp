#include "solve.h"

bool is_increasing(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i)
        if (arr[i + 1] <= arr[i])
            return false;
    return true;
}

bool is_symmetrical(int arr[], int n) {
    for (int i = 0; 2 * i <= n - 1; ++i)
        if (arr[i] != arr[n - 1 - i])
            return false;
    return true;
}
bool is_arithmetic(int arr[], int n) {
    if (n <= 2)
        return true;
    int d = arr[1] - arr[0];
    for (int i = 2; i < n; ++i)
        if (arr[i] - arr[i - 1] != d)
            return false;
    return true;
}