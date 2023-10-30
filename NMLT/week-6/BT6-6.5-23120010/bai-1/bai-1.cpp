#include "bai-1.h"
#include "io-1.h"
#include "solve-1.h"
#include <iostream>

void bai_1() {
    int n;
    input_1(n);
    bool is_prime[n + 1] {};
    solve_1(is_prime, n);
    output_1(is_prime, n);
}