#include "solve-1.h"

void solve_1(bool is_prime[], int n) {
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i] == false)
            for (int j = i * i; j <=n; j += i) {
                is_prime[j] = true;
            }
    }
}