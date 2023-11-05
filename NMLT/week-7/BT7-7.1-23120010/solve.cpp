#include "solve.h"
#include "check_prime.h"

int count_prime(int arr[], int n) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if ( is_prime(arr[i]) )
            ++cnt;
    }
    return cnt;
}

int count_negative(int arr[], int n) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0)
            ++cnt;
    }
    return cnt;
}